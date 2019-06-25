#include "tratador.class.h"

Tratador::Tratador(){
	this->m_atributos.push_back("Nível de acesso");
}
Tratador::Tratador(	int		id,
					string	nome,
					string	cpf,
					short	idade,
					string	tipo_sanguineo,
					char	fator_rh,
					string	especialidade,
					int		nivel_acesso){
	this->m_id 				= id;
	this->m_nome			= nome;
	this->m_cpf				= cpf;
	this->m_idade 			= idade;
	this->m_tipo_sanguineo	= tipo_sanguineo;
	this->m_fator_rh		= fator_rh;
	this->m_especialidade	= especialidade;
	this->m_nivel_acesso	= nivel_acesso;

}
Tratador::~Tratador(){
	
}

int Tratador::getNivelAcesso(){
	return this->m_nivel_acesso;
}

bool Tratador::existeId(string dado){
	this->makeList("funcionarios",10);
	for(auto elem : this->m_dados){
		if(!elem.first.compare("Tratador")){
			for(int i = 0; i < (int)elem.second.size();i++){
				if(!dado.compare(elem.second[i][0])){
					return true;
				}
			}
		}
	}
	return false;
}

void Tratador::lerAtributos(){
	string dado;
	for(int i = 0; i < (int)this->getAtributos().size();++i){

		cout << this->getAtributos()[i] << ": " << endl;
		setbuf(stdin, NULL);
		getline(cin,dado);

		if(i == 0){
			if(this->is_number(dado)){
				if(!this->existeId(dado)){
					this->m_id = stoi(dado);
					this->m_dados_obj.push_back(dado);
				}
				else{
					cout << "Já existe um funcionário com esse ID!\n";
					i--;
				}
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 1){
			this->m_nome = dado;
			this->m_dados_obj.push_back("Tratador");
			this->m_dados_obj.push_back(dado);
		}
		else if(i == 2){
			if(this->validaCpf(dado)){
				this->m_cpf = dado;
				this->m_dados_obj.push_back(dado);
			}
			else{
				cout << "CPF Inválido!" << endl;
				i--;
			}
		}
		else if(i == 3){
			if(this->is_number(dado)){
				this->m_idade = stoi(dado);
				this->m_dados_obj.push_back(dado);
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;	
			}
		}
		else if(i == 4){
			if(this->validaTipoSanguineo(dado)){
				this->m_tipo_sanguineo = dado;
				this->m_dados_obj.push_back(dado);
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 5){
			if(this->validaFatorRh(dado)){
				this->m_fator_rh = dado.at(0);
				this->m_dados_obj.push_back(dado);
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		else if(i == 6){
			this->m_especialidade = dado;
			this->m_dados_obj.push_back(dado);
		}
		else if(i == 7){
			this->m_especialidade = dado;
			this->m_dados_obj.push_back(dado);
			this->m_dados_obj.push_back("-");
		}
		else if(i == 8){
			if(this->is_number(dado)){
				this->m_nivel_acesso = stoi(dado);
				this->m_dados_obj.push_back(dado);	
			}
			else{
				cout << "Dado inválido!" << endl;
				i--;
			}
		}
		dado.clear();
	}
}