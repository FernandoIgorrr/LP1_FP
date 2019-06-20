#ifndef MAMIFERO_CLASS_H_INLCUDED
#define MAMIFERO_CLASS_H_INCLUDED
 
#include "animal.class.h"
#include <string>

using namespace std;

/**
 *  @brief Classe Manífero para representar os animais da classe Mamífero deriviados da classe animal
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Mamifero: public Animal{

	protected:
		int m_cor_pelo;	
	public:
		Mamifero();
		~Mamifero();

		int getCorPelo();

};

#endif
