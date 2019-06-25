#include "funcionario.class.h"

/**
*
*Funções get
*
*  */
template<class Class>
int		Funcionario<Class>::getId(){
	return this->m_id;
}
template<class Class>
string	Funcionario<Class>::getNome(){
	return this->m_nome;
}
template<class Class>
string	Funcionario<Class>::getCpf(){
	return this->m_cpf;
}
template<class Class>
short	Funcionario<Class>::getIdade(){
	return this->m_idade;
}
template<class Class>
string	Funcionario<Class>::getTipoSanguineo(){
	return this->m_tipo_sanguineo;
}
template<class Class>
char	Funcionario<Class>::getFatorRh(){
	return this->m_fator_rh;
}
template<class Class>
string	Funcionario<Class>::getEspecialidade(){
	return this->m_especialidade;
}
		
/**
*
*Funções set
*
*  */
template<class Class>
void Funcionario<Class>::setId(int id){
	this->m_id = id;
}

template<class Class>
void Funcionario<Class>::setNome(string nome){
	this->m_nome = nome;
}

template<class Class>
void Funcionario<Class>::setCpf(string cpf){
	this->m_cpf = cpf;
}

template<class Class>
void Funcionario<Class>::setIdade(short idade){
	this->m_idade = idade;
}

template<class Class>
void Funcionario<Class>::setTipoSanguineo(string tipo_sanguineo){
	this->m_tipo_sanguineo = tipo_sanguineo;
}

template<class Class>
void Funcionario<Class>::setFatorRh(char fator_rh){
	this->m_fator_rh = fator_rh;
}

template<class Class>
void Funcionario<Class>::setEspecialidade(string especialidade){
	this->m_especialidade = especialidade;
}