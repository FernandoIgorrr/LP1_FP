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
			
		Reptil(	int 	_m_id, 
				string 	_m_classe, 
				string 	_m_nome_cientifico,
				string 	_m_nome_batismo, 
				char 	_m_sexo, 
				double	_m_tamanho, 
				string 	_m_dieta, 
				int 	_m_veterinario, 
				int 	_m_tratador,  
				bool 	_m_nativo,
				bool 	_m_venenoso,
				string	_m_tipo_veneno
				);
		~Reptil();
		
		bool 			getVenenoso();
		string 			getTipoVeneno();

};

#endif
