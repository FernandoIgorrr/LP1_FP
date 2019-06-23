#include "ave.class.h"

/**
* Funções GET
*	*/

Ave::Ave(){
	vector<string> atributos = {"Id","Classe","Nome científico","Nome de batismo","Sexo","Tamanho","Dieta","Veterinário","Tratador","Nativo","Tamanho do bico(CM)","Envergadura das asas"};
	this->setAtributos(atributos);
}

Ave::Ave(int 	_m_id, 
		string 	_m_classe, 
		string 	_m_nome_cientifico,
		string  _m_nome_batismo,
		char 	_m_sexo, 
		double	_m_tamanho, 
		string 	_m_dieta, 
		int 	_m_veterinario, 
		int 	_m_tratador, 
		bool 	_m_nativo,
		double	_m_tamanho_bico_cm,
		double	_m_envergadura_asas
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
	this->m_tamanho_bico_cm 	= _m_tamanho_bico_cm;	
	this->m_envergadura_asas 	= _m_envergadura_asas;
}

Ave::~Ave(){
	
}

double Ave::getTamanhoBico(){
	return this->m_tamanho_bico_cm;
}

double Ave::getEnvergaduraAsas(){
	return this->m_envergadura_asas;
}