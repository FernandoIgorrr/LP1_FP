#ifndef REPTIL_CLASS_H_INLCUDED
#define REPTIL_CLASS_H_INCLUDED
 
#include "animal.class.h"
#include <string>

using namespace std;

/**
 *  @brief Classe Réptil para representar os animais da classe Réptil deriviados da classe animal
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Reptil: public Animal{

	protected:
		bool 	m_venenoso;
		string	m_tipo_veneno;	
	public:
		Reptil();
		~Reptil();

		bool 	getVenenoso();
		string 	getTipoVeneno();

};

#endif
