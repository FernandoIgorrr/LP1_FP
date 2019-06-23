#include "reptil.class.h"

Reptil::Reptil(){
	vector<string> atributos = {"Id","Classe","Nome científico","Nome de batismo","Sexo","Tamanho","Dieta","Veterinário","Tratador","Nativo","Venenoso","Tipo do veneno"};
	this->setAtributos(atributos);
}

Reptil::Reptil(	int 	_m_id, 
				string 	_m_classe, 
				string 	_m_nome_cientifico,
				string  _m_nome_batismo,
				char 	_m_sexo, 
				double	_m_tamanho, 
				string 	_m_dieta, 
				int 	_m_veterinario, 
				int 	_m_tratador,
				bool	_m_nativo, 
				bool	_m_venenoso,
				string	_m_tipo_veneno
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
	this->m_venenoso 			= _m_venenoso;
	this->m_tipo_veneno 		= _m_tipo_veneno;
}

Reptil::~Reptil(){
	
}

/**
* Funções GET
*	*/

bool Reptil::getVenenoso(){
	return this->m_venenoso;
}

string Reptil::getTipoVeneno(){
	return this->m_tipo_veneno;
}