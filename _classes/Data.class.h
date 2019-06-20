#ifndef DATA_CLASS_H_INLCUDED
#define DATA_CLASS_H_INCLUDED
 
 #include <string>

using namespace std;

/**
 *  @brief Classe data para manipulação de datas
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

struct myDate{
	short dia;
	short mes;
	short ano;
};

class Data{

	protected:
		myDate data;
	public:
		Data();

		void showData();

		myDate getData();

		bool SetData(myDate _data);

		bool verificaData(myDate _data);

		~Data();

};

#endif
