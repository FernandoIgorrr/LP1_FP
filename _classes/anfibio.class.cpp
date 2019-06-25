#include "anfibio.class.h"

/**
* Funções GET
*	*/

Anfibio::Anfibio(){
	this->initializeAtributes();
	this->m_atributos.push_back("Total de Mudas");
	this->m_atributos.push_back("Data da última muda");
}

Anfibio::Anfibio(int 	_m_id, 
				string 	_m_classe, 
				string 	_m_nome_cientifico,
				string  _m_nome_batismo,
				char 	_m_sexo, 
				double	_m_tamanho, 
				string 	_m_dieta, 
				int 	_m_veterinario, 
				int 	_m_tratador, 
				bool 	_m_nativo,
				int		_m_total_mudas, 
				myDate 	_m_ultima_muda
				){
	this->m_id 				= _m_id; 
	this->m_classe 			= _m_classe; 
	this->m_nome_cientifico = _m_nome_cientifico;
	this->m_nome_batismo 	= _m_nome_batismo;  
	this->m_sexo 			= _m_sexo;
	this->m_tamanho 		= _m_tamanho; 
	this->m_dieta 			= _m_dieta; 
	this->m_veterinario 	= _m_veterinario; 
	this->m_tratador 		= _m_tratador; 
	this->m_nativo 			= _m_nativo;
	this->m_total_mudas 	= _m_total_mudas; 
	this->m_ultima_muda 	= _m_ultima_muda;

}

Anfibio::~Anfibio(){

}
void Anfibio::lerAtributos(){

	string dado;
	for(int i = 0; i < (int)this->getAtributos().size();++i){
		if(i == 1){

		}
		else{
			cout << this->getAtributos()[i] << ": " << endl;
			if(i != 11){
				setbuf(stdin, NULL);
    			getline(cin,dado);
    		}
		}
		if(i == 11){
			myDate data;
			cout << "Dia: ";
			cin >> data.dia;
			cout << "Mês: ";
			cin >> data.mes;
			cout << "Ano: ";
			cin >> data.ano;

			if(this->validaData(data)){
				this->m_ultima_muda = data;
				this->m_dados_obj.push_back(this->dateString(data));
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		if(i == 0){
			if(this->is_number(dado)){
				if(!this->existeId(dado)){
					this->m_id = stoi(dado);
					this->m_dados_obj.push_back(dado);
				}
				else{
					cout << "Já existe um animal com esse ID!\n";
					i--;
				}
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 1){
			this->m_classe = {"Anfíbio"};
			this->m_dados_obj.push_back("Anfíbio");
		}
		else if(i == 2){
			this->m_nome_cientifico = dado;
			this->m_dados_obj.push_back(dado);
		}
		else if(i == 3){
			this->m_nome_batismo = dado;
			this->m_dados_obj.push_back(dado);
		}
		else if(i == 4){
			if(this->validaSexo(dado)){
				this->m_sexo = dado.at(0);
				this->m_dados_obj.push_back(dado);
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 5){
			if(this->is_fp(dado)){
				this->m_tamanho = stod(dado);
				this->m_dados_obj.push_back(dado);
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 6){
			this->m_dieta = dado;
			this->m_dados_obj.push_back(dado);
		}
		else if(i == 7){
			if(this->is_number(dado)){
				Veterinario *v = new Veterinario();
				if(v->existeId(dado) || !dado.compare("0")){
					this->m_veterinario = stoi(dado);
					this->m_dados_obj.push_back(dado);
				}
				else{
					cout << "Não existe funcionário com esse ID!" << endl;
					i--;	
				}
				delete(v);
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 8){
			if(this->is_number(dado)){
				Tratador *t = new Tratador();
				if(t->existeId(dado) || !dado.compare("0")){
					this->m_tratador = stoi(dado);
					this->m_dados_obj.push_back(dado);
				}
				else{
					cout << "Não existe Funcionário com esse ID!" << endl;
					i--;
				}
				delete(t);
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 9){
			if(this->validaNativo(dado)){
				this->m_nativo = this->toNativo(dado);
				this->m_dados_obj.push_back(this->bool_cast(this->m_nativo));
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 10){
			if(this->is_number(dado)){
				this->m_total_mudas = stoi(dado);
				this->m_dados_obj.push_back(dado);
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		dado.clear();
	}
	this->m_dados_obj.push_back("-");
	this->m_dados_obj.push_back("-");
	this->m_dados_obj.push_back("-");
	this->m_dados_obj.push_back("-");
	this->m_dados_obj.push_back("-");

}

void Anfibio::showDate(){
	cout << this->m_ultima_muda.dia << "/" << this->m_ultima_muda.mes << "/" << this->m_ultima_muda.ano; 
}

int Anfibio::getTotalMudas(){
	return this->m_total_mudas;
}

myDate Anfibio::getUltimaMuda(){
	return this->m_ultima_muda;
}

void Anfibio::setUltimaMuda(myDate data){
	this->m_ultima_muda = data;
}

string Anfibio::dateString(myDate data){
	string date(to_string(data.dia) + "/" + to_string(data.mes) + "/" + to_string(data.ano));
	return date;
}

void Anfibio::vsToClass(vector<string> linha){
		
}

bool Anfibio::validaData(myDate data){
	if(data.ano > 2019 || data.ano < 1900){
		return false;
	}
	if(data.mes > 12 || data.mes < 1){
		return false;
	}
	if(data.mes == 1 || data.mes == 3 || data.mes == 5 || data.mes == 7 || data.mes == 8 || data.mes == 10 || data.mes == 12){
		if(data.dia > 31 || data.dia < 1){
			return false;
		}
	}
	else if(data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11){
		if(data.dia > 30 || data.dia < 1){
			return false;
		}	
	}
	else{
		if(data.dia > 28){
			return false;
		}
	}
	return true;
}