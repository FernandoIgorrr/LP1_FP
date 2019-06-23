#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Dados {

	protected:
		//vector<C> v_dados_gerais;
		map<string,vector<vector<string>>> m_dados_gerais;
	public:

		Dados();
		virtual ~Dados() = 0;

		void makeList(string classe_base, int numero_campos);
		void showList(string m_class);

		map<string,vector<vector<string>>> getDadosGerais();

		/*template <class C>
		map<string,C> 	getList();
		void 			setList(string classe_base);
		virtual void	vsToClass(vector<string> linha) = 0;

		bool create_();
		bool read_();
		bool update();
		bool delete_();*/
		
		

};