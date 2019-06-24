#include "mamifero.class.h"

Mamifero::Mamifero(){
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