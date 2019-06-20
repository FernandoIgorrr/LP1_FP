#include "animal.class.h"

Animal::Animal(){

}

Animal::~Animal(){

}

/*Animal::Animal(	int 	_m_id, 
				string 	_m_classe, 
				string 	_m_nome_cientifico, 
				char 	_m_sexo, 
				double	_m_tamanho, 
				string 	_m_dieta, 
				int 	_m_veterinario, 
				int 	_m_tratador, 
				string 	_m_nome_batismo, 
				bool 	_m_nativo
				){
	this->m_id 				= _m_id; 
	this->m_classe 			= _m_classe; 
	this->m_nome_cientifico	= _m_nome_cientifico; 
	this->m_sexo 			= _m_sexo;
	this->m_tamanho			= _m_tamanho; 
	this->m_dieta			= _m_dieta;
	this->m_veterinario		= _m_veterinario; 
	this->m_tratador		= _m_tratador;
	this->m_nome_batismo	= _m_nome_batismo; 
	this->m_nativo 			= _m_nativo;
}
*/

/**
* Funções GET
*	*/

int Animal::getID(){
	return this->m_id;
}

string Animal::getClasse(){
	return this->m_classe;
}

string Animal::getNomeCientifico(){
	return this->m_nome_cientifico;
}

char Animal::getSexo(){
	return this->m_sexo;
}

double Animal::getTamanho(){
	return this->m_tamanho;
}

string Animal::getDieta(){
	return this->m_dieta;
}

int Animal::getVeterinarioId(){
	return this->m_veterinario;
}

int Animal::getTratadorId(){
	return this->m_tratador;
}

string Animal::getNomeBatismo(){
	return this->m_nome_batismo;
}

bool Animal::getNativo(){
	return this->m_nativo;
}

/**
* Funções SET
*	*/

void Animal::setID(int id){
	this->m_id = id;
}

void Animal::setClasse(string classe){
	this->m_classe = classe;
}

void Animal::setNomeCientifico(string nome_cientifico){
	this->m_nome_cientifico = nome_cientifico;
}

void Animal::setSexo(char sexo){
	this->m_sexo = sexo;
}

void Animal::setTamanho(double tamanho){
	this->m_tamanho = tamanho;
}

void Animal::setDieta(string dieta){
	this->m_dieta = dieta;
}

void Animal::setVeterinarioId(int veterinario_id){
	this->m_veterinario = veterinario_id;
}

void Animal::setTratadorId(int tratador_id){
	this->m_tratador = tratador_id;
}

void Animal::setNomeBatismo(string nome_batismo){
	this->m_nome_batismo = nome_batismo;
}

void Animal::setNativo(bool nativo){
	this->m_nativo = nativo;
}