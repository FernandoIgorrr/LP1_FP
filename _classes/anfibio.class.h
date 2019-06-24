#ifndef ANFIBIO_CLASS_H_INLCUDED
#define ANFIBIO_CLASS_H_INCLUDED
 
#include "animal.class.h"
#include "../_structs/data.struct.h"
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
		myDate 	m_ultima_muda;
	public:

		Anfibio();

		Anfibio(int 	_m_id, 
				string 	_m_classe, 
				string 	_m_nome_cientifico, 
				string 	_m_nome_batismo,
				char 	_m_sexo, 
				double	_m_tamanho, 
				string 	_m_dieta, 
				int 	_m_veterinario, 
				int 	_m_tratador,  
				bool 	_m_nativo,
				int		_m_total_mudas, 
				myDate 	_m_ultima_muda
				);

		~Anfibio();
		
		void 	Insert(Anfibio *a);

		void 	showDate();

		void	lerAtributos();

		int		getTotalMudas();

		bool	validaData(myDate data);
		myDate	getUltimaMuda();
		string	dateString(myDate data);

		void 	setUltimaMuda(myDate data);

		void 	vsToClass(vector<string> linha);

};

#endif
