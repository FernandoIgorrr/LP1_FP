#include "anfibio.class.h"

/**
* Funções GET
*	*/
Anfibio::Anfibio(){

}

/*Anfibio::Anfibio(int _m_total_mudas, myDate _m_ultima_muda){
	this->m_total_mudas = _m_total_mudas;
	this->m_ultima_muda = _m_ultima_muda;
}*/

int Anfibio::getTotalMudas(){
	return this->m_total_mudas;
}

myDate Anfibio::getUltimaMuda(){
	return this->m_ultima_muda.getData();
}


void Anfibio::setUltimaMuda(Data data){
	this->m_ultima_muda = data;
}

Anfibio::~Anfibio(){

}