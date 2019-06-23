#ifndef VETERINARIO_CLASS_H_INLCUDED
#define VETERINARIO_CLASS_H_INCLUDED

#include "funcionario.class.h"

/**
 *  @brief Classe Veterinario que serve para representar os veterinarios no software
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Veterinario : public Funcionario{

	private:
		string m_cmv;
		
	public:
		Veterinario(int		id,
					string	nome,
					string	cpf,
					short	idade,
					string	tipo_sanguineo,
					char	fator_rh,
					string	especialidade,
					string	cmv);
		
		~Veterinario();

		

};

#endif
