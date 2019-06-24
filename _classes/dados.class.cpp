#include "dados.class.h"

Dados::Dados(){

}

Dados::~Dados(){

}

bool Dados::stob(string dado){
	try{
		boost::lexical_cast<bool>(dado);
		return true;
	}
	catch(boost::bad_lexical_cast const &e){
		return false;
	}
}

bool Dados::is_fp(string dado){
	try{
		stod(dado);
		return true;
	}
	catch(exception& e){
		return false;
	}
}

bool Dados::is_number(const std::string& s){

    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

vector<string> Dados::getAtributos(){
	return this->m_atributos;
}

map<string,vector<vector<string>>> Dados::getDados(){
	return this->m_dados;
}

void Dados::makeList(string classe_base, int numero_campos){

	ifstream arqDados("_dados/"+classe_base+".csv");

	if(arqDados.bad()) {
		cerr << "o arquivo nao foi aberto" << endl;
		//exit(1);
	}
	else if(!arqDados) {
		cerr << "o arquivo nao foi aberto" << endl;
		//exit(1);
	}
	else if(arqDados.is_open() == 0) {
		cerr << "o arquivo nao foi aberto" << endl;
		//exit(1);
	}
	else{

		this->m_dados.clear();

		vector<string> linha;
		string aux;
		while(arqDados.good()){
			
			for(int i = 0;i < numero_campos;i++){
				if(i < numero_campos - 1){
					getline(arqDados,aux,';');	
				}
				else{
					getline(arqDados,aux,'\n');
				}
				linha.push_back(aux);
				aux.clear();
			}			
			if(this->m_dados.find(linha[1]) == this->m_dados.end()){
				vector<vector<string>> v_aux;
				this->m_dados.insert(pair<string,vector<vector<string>>>(linha[1],v_aux));
			}
			
			this->m_dados[linha[1]].push_back(linha); 
			
			linha.clear();
		}
		arqDados.close();
	}
}
void Dados::showList(string m_class){
	for(auto elem : this->m_dados){
		if(!m_class.compare(elem.first)){
			for(int i = 0; i < (int)elem.second.size();i++){
				int tamanho_total = 0;
				for(int j = 0;j < (int)elem.second[i].size();j++){
					tamanho_total = tamanho_total + (int)elem.second[i][j].size() + 3;
				}
				for(int j = 0;j < tamanho_total - 5;j++){
					cout << "-";
				}
				cout << "\n| ";
				for(int j = 0;j < (int)elem.second[i].size();j++){
					if(!m_class.compare("Anfíbio")){
						if(j == 12 || j == 13 || j == 14 || j == 15 || j == 16){

						}
						else{
							cout << elem.second[i][j] << " | ";
						}
					}
					else if(!m_class.compare("Ave")){
						if(j == 10 || j == 11 || j == 14 || j == 15 || j == 16){

						}
						else{
							cout << elem.second[i][j] << " | ";
						}
					}
					else if(!m_class.compare("Mamífero")){
						if(j == 10 || j == 11 ||j == 12 || j == 13 || j == 15 || j == 16){

						}
						else{
							cout << elem.second[i][j] << " | ";
						}
					}
					else if(!m_class.compare("Réptil")){
						if(j == 10 || j == 11 || j == 12 || j == 13 || j == 14){

						}
						else{
							cout << elem.second[i][j] << " | ";
						}
					}
					else if(!m_class.compare("Veterinário")){
						if(j == 9){

						}
						else{
							cout << elem.second[i][j] << " | ";
						}
					}
					else if(!m_class.compare("Tratador")){
						if(j == 8){

						}
						else{
							cout << elem.second[i][j] << " | ";
						}
					}
					else{
						cout << elem.second[i][j] << " | ";
					}
				}
				cout << "\n";
				for(int j = 0;j < tamanho_total - 5;j++){
					cout << "-";
				}
				cout << "\n";
			}
		}
	}
	this->m_dados.clear();
}

string Dados::bool_cast(const bool b) {
    ostringstream ss;
    ss << boolalpha << b;
    return ss.str();
}

void Dados::showAtributos(){
	int head = 0;
	for(int i = 0; i < (int)this->getAtributos().size();i++){
		head = head + (int)this->getAtributos()[i].size() + 3;
	}
	for(int i = 0;i < head;i++){
		cout << "-";
	}
	cout << "\n| ";
	for(int i = 0;i < (int)this->getAtributos().size();i++){
		cout << this->getAtributos()[i] << " | ";
	}
	cout << "\n";
	for(int i = 0;i < head;i++){
		cout << "-";
	}
}