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
		string m_cor_pelo;	
	public:

		Mamifero();

		Mamifero(int 	_m_id, 
				string 	_m_classe, 
				string 	_m_nome_cientifico, 
				string 	_m_nome_batismo,
				char 	_m_sexo, 
				double	_m_tamanho, 
				string 	_m_dieta, 
				int 	_m_veterinario, 
				int 	_m_tratador,
				bool 	_m_nativo,
				string	_m_cor_pelo
				);
		
		~Mamifero();
		
		string 			getCorPelo();

};

#endif
