#include "funcionario.class.h"

Funcionario::Funcionario(){
	this->m_atributos.push_back("Id");
	this->m_atributos.push_back("Nome");
	this->m_atributos.push_back("CPF");
	this->m_atributos.push_back("Idade");
	this->m_atributos.push_back("Tipo sanguíneo");
	this->m_atributos.push_back("Fator RH");
	this->m_atributos.push_back("Especialidade");
}

Funcionario::~Funcionario(){
	
}

/**
*
*Funções get
*
*  */
int		Funcionario::getId(){
	return this->m_id;
}

string	Funcionario::getNome(){
	return this->m_nome;
}

string	Funcionario::getCpf(){
	return this->m_cpf;
}

short	Funcionario::getIdade(){
	return this->m_idade;
}

string	Funcionario::getTipoSanguineo(){
	return this->m_tipo_sanguineo;
}

char	Funcionario::getFatorRh(){
	return this->m_fator_rh;
}

string	Funcionario::getEspecialidade(){
	return this->m_especialidade;
}
		
/**
*
*Funções set
*
*  */
void Funcionario::setId(int id){
	this->m_id = id;
}

void Funcionario::setNome(string nome){
	this->m_nome = nome;
}

void Funcionario::setCpf(string cpf){
	this->m_cpf = cpf;
}

void Funcionario::setIdade(short idade){
	this->m_idade = idade;
}

void Funcionario::setTipoSanguineo(string tipo_sanguineo){
	this->m_tipo_sanguineo = tipo_sanguineo;
}

void Funcionario::setFatorRh(char fator_rh){
	this->m_fator_rh = fator_rh;
}

void Funcionario::setEspecialidade(string especialidade){
	this->m_especialidade = especialidade;
}