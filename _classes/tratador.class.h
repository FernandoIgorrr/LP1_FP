#ifndef TRATADOR_CLASS_H_INLCUDED
#define TRATADOR_CLASS_H_INCLUDED

#include "funcionario.class.h"
/**
 *  @brief Classe Tratador que serve para representar os tratadores no software
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Tratador : public Funcionario{

	private:
		int m_nivel_acesso;
		
	public:
		Tratador(int	id,
				 string	nome,
				 string	cpf,
				 short	idade,
				 string	tipo_sanguineo,
				 char	fator_rh,
				 string	especialidade,
				 int	nivel_acesso);
		~Tratador();

		

};

#endif
