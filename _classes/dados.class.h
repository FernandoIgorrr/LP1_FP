#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <exception>
#include <boost/lexical_cast.hpp>


using namespace std;

class Dados {

	protected:
		vector<string> m_atributos;
		map<string,vector<vector<string>>> m_dados;
	public:

		Dados();
		virtual ~Dados() = 0;

		bool is_number(const std::string& s);
		bool is_fp(string dado);
		bool stob(string dado);

		vector<string> getAtributos();

		void makeList(string classe_base, int numero_campos);
		void showList(string m_class);
		void showAtributos();

		map<string,vector<vector<string>>> getDados();

		string bool_cast(const bool b);
		void lerAtributos();

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