#include <iostream>
#include "_classes/anfibio.class.h"
#include "_classes/ave.class.h"
#include "_classes/mamifero.class.h"
#include "_classes/reptil.class.h"
#include "_classes/veterinario.class.h"
#include "_classes/tratador.class.h"
#include "_classes/command.class.h"


using namespace std;

int main(){

	Command *tuto = new Command();
	tuto->man();

	string command = "man";  
    int i = command.compare("quit");

     while(i){
     
        setbuf(stdin, NULL);
         cout << "->";  
         getline(cin,command);
         Command *c = new Command(command);
         c->getCommand();
         i   = command.compare("quit");
          
     }

	return 0;
}
