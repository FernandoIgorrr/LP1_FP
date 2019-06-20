#ifndef VETERINARIO_CLASS_H_INLCUDED
#define VETERINARIO_CLASS_H_INCLUDED

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
		virtual Veterinario(){}
		virtual ~Veterinario() = 0;

		

};

#endif
