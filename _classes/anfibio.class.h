#ifndef ANFIBIO_CLASS_H_INLCUDED
#define ANFIBIO_CLASS_H_INCLUDED
 
#include "animal.class.h"
#include <string>

using namespace std;

/**
 *  @brief Classe Anfíbio para representar os animais da classe Anfíbio deriviados da classe animal
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Anfibio: public Animal<Anfibio>{

	protected:
		int		m_total_mudas;
		myDate 	m_ultima_muda;
	public:


		Anfibio();

		/**
		*
		* @brief Construtor padrão
		* @param Recebe os parâmetros para atribuir os valoures ao objeto Anfíbio
		* */
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

		/**
		*
		* @brief Mostra uma data na tela
		* @return Nothing
		* */
		void 	showDate();
			

		/**
		*
		* @brief Ler os atributos para preencher o objeto
		* @return Nothing
		* */
		void	lerAtributos();

		/**
		*
		* @brief Pega o numero total de mudas
		* @return Int
		* */
		int		getTotalMudas();

		/**
		*
		* @brief Pega uma data da ultima muda
		* @return Data
		* */
		myDate	getUltimaMuda();
		
		/**
		*
		* @brief Transforma um tipo data em um tipo stirng
		* @return String
		* */
		string	dateString(myDate data);
		
		/**
		*
		* @brief verifica se a data é válida
		* @return bool
		* */
		bool	validaData(myDate data);
	
		/**
		*
		* @brief Altera para o ultima dia da muda
		* @return Nothing
		* */
		void 	setUltimaMuda(myDate data);

		/**
		*
		* @brief Preenche o objeto aprtir de um vetor de string
		* @return Nothing
		* */
		void 	vsToClass(vector<string> linha);

};

#endif
