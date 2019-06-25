#pragma once

#include <string>
#include "dados.class.h"

using namespace std;
/**
 *  @brief Classe abstrata funcionário que serve da base para outras classes de funcionários específicas, neste caso veterinário e tratador
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */
template<class Class>
class Funcionario : public Dados<Class>{

	protected:
		int				m_id;
		string			m_nome;
		string			m_cpf;
		short			m_idade;
		string			m_tipo_sanguineo;
		char			m_fator_rh;
		string			m_especialidade;
	public:

		/**
		*
		*Construtores e destrutores padrrões
		*
		*  */
		Funcionario(){
			this->m_atributos.push_back("Id");
			this->m_atributos.push_back("Nome");
			this->m_atributos.push_back("CPF");
			this->m_atributos.push_back("Idade");
			this->m_atributos.push_back("Tipo sanguíneo");
			this->m_atributos.push_back("Fator RH");
			this->m_atributos.push_back("Especialidade");
		};

		virtual ~Funcionario(){}

		/**
		*
		*Funções get
		*
		*  */
		int		getId();
		string	getNome();
		string	getCpf();
		short	getIdade();
		string	getTipoSanguineo();
		char	getFatorRh();
		string	getEspecialidade();
		
		/**
		*
		*Funções set
		*
		*  */
		void setId(int id);
		void setNome(string nome);
		void setCpf(string cpf);
		void setIdade(short idade);
		void setTipoSanguineo(string tipo_sanguineo);
		void setFatorRh(char fator_rh);
		void setEspecialidade(string especialidade);

		bool validaCpf(string dado){
			if(dado.size() != 14){
				return false;
			}
			else{
				if(	(dado.at(0) >= '0' 	&& dado.at(0) <= '9') &&
					(dado.at(1) >= '0' 	&& dado.at(1) <= '9') &&
					(dado.at(2) >= '0' 	&& dado.at(2) <= '9') &&
					(dado.at(3) == '.') &&
					(dado.at(4) >= '0' 	&& dado.at(4) <= '9') &&
					(dado.at(5) >= '0' 	&& dado.at(5) <= '9') &&
					(dado.at(6) >= '0' 	&& dado.at(6) <= '9') &&
					(dado.at(7) == '.') &&
					(dado.at(8) >= '0' 	&& dado.at(8) <= '9') &&
					(dado.at(9) >= '0' 	&& dado.at(9) <= '9') &&
					(dado.at(10) >= '0'	&& dado.at(10) <= '9') &&
					(dado.at(11) == '-') &&
					(dado.at(12) >= '0'	&& dado.at(12) <= '9') &&
					(dado.at(13) >= '0'	&& dado.at(13) <= '9')
					){
					return true;
				}
				else{
					return false;
				}
			}
		}
		bool validaTipoSanguineo(string dado){
			if(dado.size() > 2 || dado.size() < 1){
				return false;
			}
			else{
				if(!dado.compare("A") || !dado.compare("B") || !dado.compare("O") || !dado.compare("AB")){
					return true;
				}
				else{
					return false;
				}
			}
		}
		bool validaFatorRh(string dado){
			if(dado.size() != 1){
				return false;
			}
			else{
				if(dado.at(0) == '+' || dado.at(0) == '-'){
					return true;;
				}
				else{
					return false;
				}
			}
		}

};