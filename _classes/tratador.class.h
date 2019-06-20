#ifndef TRATADOR_CLASS_H_INLCUDED
#define TRATADOR_CLASS_H_INCLUDED

/**
 *  @brief Classe Tratador que serve para representar os tratadores no software
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Tratador : public Funcionario{

	private:
		int m_nivel_de_segunraca;
		
	public:
		virtual Tratador(){}
		virtual ~Tratador() = 0;

		

};

#endif
