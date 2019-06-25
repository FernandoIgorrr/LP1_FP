#include "mamifero.class.h"

Mamifero::Mamifero(){
	this->initializeAtributes();
	this->m_atributos.push_back("Cor do pelo");	
}

Mamifero::Mamifero(	int 	_m_id, 
					string 	_m_classe, 
					string 	_m_nome_cientifico,
					string  _m_nome_batismo,
					char 	_m_sexo, 
					double	_m_tamanho, 
					string 	_m_dieta, 
					int 	_m_veterinario, 
					int 	_m_tratador,
					bool	_m_nativo, 
					string  _m_cor_pelo
				){

	this->m_id 					= _m_id; 
	this->m_classe 				= _m_classe; 
	this->m_nome_cientifico 	= _m_nome_cientifico;
	this->m_nome_batismo 		= _m_nome_batismo;  
	this->m_sexo 				= _m_sexo;
	this->m_tamanho 			= _m_tamanho; 
	this->m_dieta 				= _m_dieta; 
	this->m_veterinario 		= _m_veterinario; 
	this->m_tratador 			= _m_tratador; 
	this->m_nativo 				= _m_nativo;
	this->m_cor_pelo			= _m_cor_pelo;
}

Mamifero::~Mamifero(){
	
}

/**
* Funções GET
*	*/

string Mamifero::getCorPelo(){
	return this->m_cor_pelo;
}

void Mamifero::lerAtributos(){

	string dado;
	for(int i = 0; i < (int)this->getAtributos().size();++i){
		if(i == 1){

		}
		else{
			cout << this->getAtributos()[i] << ": " << endl;
			setbuf(stdin, NULL);
    		getline(cin,dado);
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
			this->m_classe = {"Mamífero"};
			this->m_dados_obj.push_back("Mamífero");
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
				this->m_dados_obj.push_back("-");
				this->m_dados_obj.push_back("-");
				this->m_dados_obj.push_back("-");
				this->m_dados_obj.push_back("-");
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 10){
			this->m_cor_pelo = dado;
			this->m_dados_obj.push_back(dado);
			this->m_dados_obj.push_back("-");
			this->m_dados_obj.push_back("-");
		}
		dado.clear();
	}
}