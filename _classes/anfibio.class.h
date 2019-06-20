#ifndef ANFIBIO_CLASS_H_INLCUDED
#define ANFIBIO_CLASS_H_INCLUDED
 
#include "animal.class.h"
#include "Data.class.h"
#include <string>

using namespace std;

/**
 *  @brief Classe Anfíbio para representar os animais da classe Anfíbio deriviados da classe animal
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Anfibio: public Animal{

	protected:
		int		m_total_mudas;
		Data 	m_ultima_muda;
	public:
		Anfibio();
		//Anfibio(int _m_total_mudas, myDate _m_ultima_muda);
		~Anfibio();

		int		getTotalMudas();
		myDate	getUltimaMuda();

		void setUltimaMuda(Data data);

};

#endif
