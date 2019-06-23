#include <iostream>
#include "_classes/anfibio.class.h"
#include "_classes/ave.class.h"
#include "_classes/mamifero.class.h"
#include "_classes/reptil.class.h"
#include "_classes/veterinario.class.h"
#include "_classes/tratador.class.h"


using namespace std;

int main(){

	myDate data;
	
	data.dia = 11;
	data.mes = 11;
	data.ano = 2011;

	Tratador *tra = new Tratador(123213,"Fernando","sdfsdf",32,"AB",'+',"SLA",1);

	Anfibio *anf = new Anfibio(1,"Anfíbio","Anfibala","nenen",'M',2.32,"CARNE",0,0,0,10,data);

	anf->makeList("animais",17);
	tra->makeList("funcionarios",9);
	tra->showList("Tratador");
	//anf->showList("Mamífero");

	return 0;
}
