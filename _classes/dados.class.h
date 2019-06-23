#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Dados {

	protected:
		vector<string> m_atributos;
		map<string,vector<vector<string>>> m_dados_gerais;
	public:

		Dados();
		virtual ~Dados() = 0;

		vector<string> getAtributos();
		void setAtributos(vector<string> atributos);

		void makeList(string classe_base, int numero_campos);
		void showList(string m_class);
		void showAtributos();

		map<string,vector<vector<string>>> getDadosGerais();

		template<class Class>
		void Insert(Class *c);

		/*template <class C>
		map<string,C> 	getList();
		void 			setList(string classe_base);
		virtual void	vsToClass(vector<string> linha) = 0;

		bool create_();
		bool read_();
		bool update();
		bool delete_();*/
		
		

};