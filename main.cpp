#include <iostream>
#include "_classes/anfibio.class.h"
#include "_classes/ave.class.h"
#include "_classes/mamifero.class.h"
#include "_classes/reptil.class.h"


using namespace std;

int main(){

	myDate date;
	date.dia = 11;
	date.mes = 11;
	date.ano = 11;

	Data data();
	data.setData(date);


	//Anfibio *anf = new Anfibio();
	//anf->setID(11111);
	//anf->setUltimaMuda(data);

	//cout << "\n" << anf->getID() << "\n" << endl;

	return 0;


}
