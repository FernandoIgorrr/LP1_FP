#ifndef AVE_CLASS_H_INLCUDED
#define AVE_CLASS_H_INCLUDED
 
#include "animal.class.h"
#include <string>

using namespace std;

/**
 *  @brief Classe Ave para representar os animais da classe Ave deriviados da classe animal
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Ave: public Animal{

	protected:
		double m_tamanho_bico_cm;
		double m_envergadura_asas;	
	public:
		Ave();
		~Ave();

		double	getTamanhoBico();
		double	getEnvergaduraAsas();

};

#endif
