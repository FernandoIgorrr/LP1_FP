#include "anfibio.class.h"

/**
* Funções GET
*	*/

Anfibio::Anfibio(){
	vector<string> atributos = {"Id","Classe","Nome científico","Nome de batismo","Sexo","Tamanho","Dieta","Veterinário","Tratador","Nativo","Total de mudas","Data da última muda"};
	this->setAtributos(m_atributos);
}

Anfibio::Anfibio(int 	_m_id, 
				string 	_m_classe, 
				string 	_m_nome_cientifico,
				string  _m_nome_batismo,
				char 	_m_sexo, 
				double	_m_tamanho, 
				string 	_m_dieta, 
				int 	_m_veterinario, 
				int 	_m_tratador, 
				bool 	_m_nativo,
				int		_m_total_mudas, 
				myDate 	_m_ultima_muda
				){
	this->m_id 				= _m_id; 
	this->m_classe 			= _m_classe; 
	this->m_nome_cientifico = _m_nome_cientifico;
	this->m_nome_batismo 	= _m_nome_batismo;  
	this->m_sexo 			= _m_sexo;
	this->m_tamanho 		= _m_tamanho; 
	this->m_dieta 			= _m_dieta; 
	this->m_veterinario 	= _m_veterinario; 
	this->m_tratador 		= _m_tratador; 
	this->m_nativo 			= _m_nativo;
	this->m_total_mudas 	= _m_total_mudas; 
	this->m_ultima_muda 	= _m_ultima_muda;

}

Anfibio::~Anfibio(){

}


void Anfibio::Insert(Anfibio a){
	cout << a.getId() << "|" a.getNome() << "\n";
}

/*Anfibio::Anfibio(int _m_total_mudas, myDate _m_ultima_muda){
	this->m_total_mudas = _m_total_mudas;
	this->m_ultima_muda = _m_ultima_muda;
}*/

int Anfibio::getTotalMudas(){
	return this->m_total_mudas;
}

myDate Anfibio::getUltimaMuda(){
	return this->m_ultima_muda;
}

void Anfibio::setUltimaMuda(myDate data){
	this->m_ultima_muda = data;
}

void Anfibio::vsToClass(vector<string> linha){
		
}