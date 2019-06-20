#ifndef FUNCIONARIO_CLASS_H_INLCUDED
#define FUNCIONARIO_CLASS_H_INCLUDED

/**
 *  @brief Classe abstrata funcionário que serve da base para outras classes de funcionários específicas, neste caso veterinário e tratador
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Funcionario{

	protected:
		int				m_id;
		string			m_nome;
		string			m_cpf;
		short			m_idade;
		string			m_tipo_sanguineo;
		char			m_fator_rh;
		string			m_especialidade;
		
	public:
		virtual Funcionario(){}
		virtual ~Funcionario() = 0;

		

};

#endif
