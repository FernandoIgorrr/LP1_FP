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
			
		Ave(int 	_m_id, 
			string 	_m_classe, 
			string 	_m_nome_cientifico, 
			string 	_m_nome_batismo,
			char 	_m_sexo, 
			double	_m_tamanho, 
			string 	_m_dieta, 
			int 	_m_veterinario, 
			int 	_m_tratador, 
			bool 	_m_nativo,
			double	_m_tamanho_bico_cm,
			double	_m_envergadura_asas
			);
		~Ave();

		double			getTamanhoBico();
		double			getEnvergaduraAsas();

};

#endif
