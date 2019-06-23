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

class Funcionario : public Dados{

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
		Funcionario();
		virtual ~Funcionario() = 0;

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
};