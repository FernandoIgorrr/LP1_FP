#pragma once
 
#include <string>

using namespace std;

/**
 *  @brief Classe abstrata Animal que serve da base para outras classes de animais específicas
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

class Animal{

	protected:
		int				m_id;
		string			m_classe;
		string			m_nome_cientifico;
		char			m_sexo;
		double			m_tamanho;
		string			m_dieta;
		int				m_veterinario;
		int				m_tratador;
		string			m_nome_batismo;
		bool			m_nativo;

	public:
		Animal();
		/*Animal(int 	_m_id, 
				string 	_m_classe, 
				string 	_m_nome_cientifico, 
				char 	_m_sexo, 
				double	_m_tamanho, 
				string 	_m_dieta, 
				int 	_m_veterinario, 
				int 	_m_tratador, 
				string 	_m_nome_batismo, 
				bool 	_m_nativo
			  );
		*/
		virtual ~Animal() = 0;

		int		getID();
		string	getClasse();
		string	getNomeCientifico();
		char	getSexo();
		double	getTamanho();
		string	getDieta();
		int		getVeterinarioId();
		int		getTratadorId();
		string	getNomeBatismo();
		bool	getNativo();

		void	setID(int id);
		void	setClasse(string classe);
		void	setNomeCientifico(string nome_cientifico);
		void	setSexo(char sexo);
		void	setTamanho(double tamanho);
		void	setDieta(string dieta);
		void	setVeterinarioId(int veterinario_id);
		void	setTratadorId(int tratador_id);
		void	setNomeBatismo(string nome_batismo);
		void	setNativo(bool nativo);

};