#include "animal.class.h"

Animal::Animal(){
	this->m_atributos.push_back("Id");
	this->m_atributos.push_back("Classe");
	this->m_atributos.push_back("Nome científico");
	this->m_atributos.push_back("Nome de batismo");
	this->m_atributos.push_back("Sexo");
	this->m_atributos.push_back("Tamanho");
	this->m_atributos.push_back("Dieta");
	this->m_atributos.push_back("Veterinário");
	this->m_atributos.push_back("Tratador");
	this->m_atributos.push_back("Nativo");
}

Animal::~Animal(){

}

/**
* Funções GET
*	*/

int Animal::getId(){
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

void Animal::setId(int id){
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

/*void Animal::vsToClass(vector<string> linha){
	
	int		id;
	string	classe;
	string	nome_cientifico;
	string	nome_batismo;
	char	sexo;
	double	tamanho;
	string	dieta;
	int		veterinario;
	int		tratador;
	bool	nativo;

	stringstream _id(linha[0]);
	_id 			>> id;

	classe 			= linha[1];
	nome_cientifico = linha[2];
	nome_batismo 	= linha[3];

	sexo 			= linha[4].at(0);

	stringstream _tamhno(linha[5]);
	_tamnho 		>> tamnho;

	dieta 			= linha[6];

	stringstream _veterinario(linha[7]);
	_veterinario 		>> veterinario;

	stringstream _tratador(linha[8]);
	_tratador 			>> tratador;

	try{
		nativo = boost::lexical_cast<bool>(linha[9]);
	}
	catch(boost::bad_lexical_cast const &e){
		nativo = false;
	}

	Animal *a = new animal 	(	id,
								classe,
								nome_cientifico,
								nome_batismo,
								sexo,
								tamahno,
								dieta,
								veterinario,
								tratador,
								nativo
							);

	this->_dados_gerais.inser(pair<string,Animal>(linha[1],*(a)));
}*/

bool Animal::toNativo(string dado){
	if(!dado.compare("s") || !dado.compare("sim")){
		return true;
	}
	return false;
}

bool Animal::validaNativo(string dado){
	if(!dado.compare("s") || !dado.compare("n") || !dado.compare("sim") || !dado.compare("nao") || !dado.compare("não")){	
		return true;
	}
	return false;
}

bool Animal::validaClasse(string dado){
	if(!dado.compare("Anfíbio") || !dado.compare("Ave") || !dado.compare("Mamífero") || !dado.compare("Réptil")){
		return true;
	}
	return false;
}

bool Animal::validaSexo(string dado){
	if(dado.size() < 1){
		return false;
	}
	if(dado.at(0) == 'M' || dado.at(0) == 'F'){
		return true;
	}
	return false;
}

