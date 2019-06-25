#pragma once

#include "tratador.class.h"
#include "veterinario.class.h"
#include "dados.class.h"
#include <string>

using namespace std;

/**
 *  @brief Classe abstrata Animal que serve da base para outras classes de animais específicas
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */
template<class Class>
class Animal: public Dados<Class>{

	protected:
		int				m_id;
		string			m_classe;
		string			m_nome_cientifico;
		string			m_nome_batismo;
		char			m_sexo;
		double			m_tamanho;
		string			m_dieta;
		int				m_veterinario;
		int				m_tratador;
		bool			m_nativo;



	public:
		/*Animal(){
			
		}
		virtual ~Animal() = 0;

		*/
		/**
		* Funções GET
		*	*/
		void initializeAtributes(){
			this->m_atributos.push_back("Id");
			this->m_atributos.push_back("Classe");
			this->m_atributos.push_back("Nome científico");
			this->m_atributos.push_back("Nome de batismo");
			this->m_atributos.push_back("Sexo");
			this->m_atributos.push_back("Tamanho");
			this->m_atributos.push_back("Dieta");
			this->m_atributos.push_back("Veterinário");
			this->m_atributos.push_back("Tratador");
			this->m_atributos.push_back("Nativo");
		}

		int getId(){
			return this->m_id;
		}

		string getClasse(){
			return this->m_classe;
		}

		string getNomeCientifico(){
			return this->m_nome_cientifico;
		}

		char getSexo(){
			return this->m_sexo;
		}

		double getTamanho(){
			return this->m_tamanho;
		}

		string getDieta(){
			return this->m_dieta;
		}

		int getVeterinarioId(){
			return this->m_veterinario;
		}

		int getTratadorId(){
			return this->m_tratador;
		}

		string getNomeBatismo(){
			return this->m_nome_batismo;
		}

		bool getNativo(){
			return this->m_nativo;
		}

		/**
		* Funções SET
		*	*/

		void setId(int id){
			this->m_id = id;
		}

		void setClasse(string classe){
			this->m_classe = classe;
		}

		void setNomeCientifico(string nome_cientifico){
			this->m_nome_cientifico = nome_cientifico;
		}

		void setSexo(char sexo){
			this->m_sexo = sexo;
		}

		void setTamanho(double tamanho){
			this->m_tamanho = tamanho;
		}

		void setDieta(string dieta){
			this->m_dieta = dieta;
		}

		void setVeterinarioId(int veterinario_id){
			this->m_veterinario = veterinario_id;
		}

		void setTratadorId(int tratador_id){
			this->m_tratador = tratador_id;
		}

		void setNomeBatismo(string nome_batismo){
			this->m_nome_batismo = nome_batismo;
		}

		void setNativo(bool nativo){
			this->m_nativo = nativo;
		}

		/*void Animal::vsToClass(vector<string> linha){
			
			int		id;
			string	classe;
			string	nome_cientifico;
			string	nome_batismo;
			char	sexo;
			double	tamanho;
			string	dieta;
			int		veterinario;
			int		tratador;
			bool	nativo;

			stringstream _id(linha[0]);
			_id 			>> id;

			classe 			= linha[1];
			nome_cientifico = linha[2];
			nome_batismo 	= linha[3];

			sexo 			= linha[4].at(0);

			stringstream _tamhno(linha[5]);
			_tamnho 		>> tamnho;

			dieta 			= linha[6];

			stringstream _veterinario(linha[7]);
			_veterinario 		>> veterinario;

			stringstream _tratador(linha[8]);
			_tratador 			>> tratador;

			try{
				nativo = boost::lexical_cast<bool>(linha[9]);
			}
			catch(boost::bad_lexical_cast const &e){
				nativo = false;
			}

			Animal *a = new animal 	(	id,
										classe,
										nome_cientifico,
										nome_batismo,
										sexo,
										tamahno,
										dieta,
										veterinario,
										tratador,
										nativo
									);

			this->_dados_gerais.inser(pair<string,Animal>(linha[1],*(a)));
		}*/
		bool existeId(string id){
			this->makeList("animais",17);
			for(auto elem : this->m_dados){
				for(int i = 0; i < (int)elem.second.size();i++){
					if(!id.compare(elem.second[i][0])){
						//cout << "\n ---" << elem.second[i][0] << "\n";
						return true;
					}
				}
			}
			return false;
		}

		bool toNativo(string dado){
			if(!dado.compare("s") || !dado.compare("sim")){
				return true;
			}
			return false;
		}

		bool validaNativo(string dado){
			if(!dado.compare("s") || !dado.compare("n") || !dado.compare("sim") || !dado.compare("nao") || !dado.compare("não")){	
				return true;
			}
			return false;
		}

		bool validaClasse(string dado){
			if(!dado.compare("Anfíbio") || !dado.compare("Ave") || !dado.compare("Mamífero") || !dado.compare("Réptil")){
				return true;
			}
			return false;
		}

		bool validaSexo(string dado){
			if(dado.size() < 1){
				return false;
			}
			if(dado.at(0) == 'M' || dado.at(0) == 'F'){
				return true;
			}
			return false;
		}
};