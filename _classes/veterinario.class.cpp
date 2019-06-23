#include "veterinario.class.h"

Veterinario::Veterinario(	int		id,
							string	nome,
							string	cpf,
							short	idade,
							string	tipo_sanguineo,
							char	fator_rh,
							string	especialidade,
							string	cmv){
	
	this->m_id 				= id;
	this->m_nome			= nome;
	this->m_cpf				= cpf;
	this->m_idade 			= idade;
	this->m_tipo_sanguineo	= tipo_sanguineo;
	this->m_fator_rh		= fator_rh;
	this->m_especialidade	= especialidade;
	this->m_cmv				= cmv;
	
}
Veterinario::~Veterinario(){

}