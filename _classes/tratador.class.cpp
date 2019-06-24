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