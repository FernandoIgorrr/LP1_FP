#include "tratador.class.h"

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