#include "dados.class.h"

Dados::Dados(){

}

Dados::~Dados(){

}

map<string,vector<vector<string>>> Dados::getDadosGerais(){
	return this->m_dados_gerais;
}

void Dados::makeList(string classe_base, int numero_campos){

	ifstream arqDados("_dados/"+classe_base+".csv");

	if(arqDados.bad()) {
		cerr << "o arquivo nao foi aberto" << endl;
		exit(1);
	}
	else if(!arqDados) {
		cerr << "o arquivo nao foi aberto" << endl;
		exit(1);
	}
	else if(arqDados.is_open() == 0) {
		cerr << "o arquivo nao foi aberto" << endl;
		exit(1);
	}
	else{

		this->m_dados_gerais.clear();

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
			if(this->m_dados_gerais.find(linha[1]) == this->m_dados_gerais.end()){
				vector<vector<string>> v_aux;
				this->m_dados_gerais.insert(pair<string,vector<vector<string>>>(linha[1],v_aux));
			}
			
			this->m_dados_gerais[linha[1]].push_back(linha); 
			
			linha.clear();
		}
		arqDados.close();
	}
}

void Dados::showList(string m_class){
	for(auto elem : this->getDadosGerais()){
		if(!m_class.compare(elem.first)){
			for(int i = 0; i < (int)elem.second.size();i++){
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
						if(j == 8){

						}
						else{
							cout << elem.second[i][j] << " | ";
						}
					}
					else if(!m_class.compare("Tratador")){
						if(j == 9){

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
			}
		}
	}
}