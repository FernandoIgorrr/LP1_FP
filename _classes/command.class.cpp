#include <iostream>
#include <string>
#include <sstream>

#include "anfibio.class.h"
#include "ave.class.h"
#include "mamifero.class.h"
#include "reptil.class.h"
#include "veterinario.class.h"
#include "tratador.class.h"
#include "command.class.h"

using namespace std;

Command::Command(){

}

Command::Command(string command){

	this->command  = this->getWords(command);
	this->numWords = this->getNumWords(); 
	this->sendCommand();

}

vector<string> Command::getCommand(){
	return this->command;
}

void Command::sendCommand(){
	
	if(this->validateCommand() == 1){
		this->errorHandling(this->executeCommand());	
	}
	else{
		this->errorHandling(this->validateCommand());
	}

}

int Command::getNumWords(){
	return this->command.size();
}

void Command::errorHandling(int error){
	if(error == 0){
		cout << "comando não encontrado \n" ;
	}
	else if(error == -1){
		cout << "Muitos comandos juntos! não aguentamos processar isso tudo :(\n" ;
	}
	else if(error == -2){
		cout << "Você não digitou nada ¯\\_(ツ)_/¯\n" ;
	}
	else if(error == -3){
		cout << "Tipo de funcionário não encontrado!\n" ;
	}
	else if(error == -4){
		cout << "Classe de animal não encontrada!\n" ;	
	}
	else if(error == -5){
		cout << "\n" ;	
	}
	else if(error == -6){
		cout << "\n" ;	
	}
	else if(error == -7){
		cout << "\n" ;	
	}
	else if(error == -8){
		cout << "\n" ;	
	}

}

int Command::validateCommand(){

	if(this->getNumWords() > 6){
		return -1;
	}
	else{
		if(this->getNumWords() == 0){
			return -2;
		}
		else if(this->getNumWords() == 1){
			if(this->getCommand()[0].compare("quit") !=0 && this->getCommand()[0].compare("man")  != 0 && this->getCommand()[0].compare("clear")){
				return 0;
			}
			else{
				return 1;
			}
		}
		else if(this->getNumWords() == 2){
			if(this->getCommand()[0].compare("show")){
				return 0;
			}
			else{
				return 1;
			}
		}
		else if(this->getNumWords() == 3){
			if(this->getCommand()[0].compare("insert")  != 0 && this->getCommand()[0].compare("update")  != 0 && this->getCommand()[0].compare("delete")  != 0 && this->getCommand()[0].compare("show")){
				return 0;
			}
			else{
				return 1;
			}
		}
		else if(this->getNumWords() == 6){
			if(this->getCommand()[0].compare("update")){
				return 0;
			}
			else{
				if(!this->getCommand()[1].compare("animal") || !this->getCommand()[1].compare("funcionario")){
					return 1;
				}
				else{
					return 0;
				}
			}
		}
		else{
			return 0;
		}
	}
}

int Command::executeCommand(){
	
	if(this->getNumWords() == 1){
		if(!this->command[0].compare("man")){
			this->man();
			return 1;
		}
		else if(!this->command[0].compare("clear")){
			this->clear();
			return 1;
		}
		else if(!this->command[0].compare("quit")){
			return 1;
		}
	}
	else if(this->getNumWords() == 2){
		if(!this->command[0].compare("show")){
			if(!this->command[1].compare("funcionarios")){
				Tratador 	*t 	= new Tratador();
				Veterinario *v 	= new Veterinario();

				v->makeList("funcionarios",10);					
				t->makeList("funcionarios",10);

				v->showList("Veterinário");
				t->showList("Tratador");

				delete(v);
				delete(t);			
			
				return 1;
			}
			else if(!this->command[1].compare("animais")){

				Anfibio 	*an = new Anfibio();
				Ave 		*av = new Ave();
				Mamifero 	*ma = new Mamifero();
				Reptil 		*re = new Reptil();

				an->makeList("animais",17);
				av->makeList("animais",17);					
				ma->makeList("animais",17);					
				re->makeList("animais",17);					

				an->showList("Anfíbio");					
				av->showList("Ave");					
				ma->showList("Mamífero");
				re->showList("Réptil");	

				delete(an);
				delete(av);				
				delete(ma);				
				delete(re);								

				return 1;
			}
			else{

			}
		}
		return 0;
	}
	else if(this->getNumWords() == 3){
		if(!this->command[0].compare("insert")){
			if(!this->command[1].compare("funcionario")){
				if(!this->command[2].compare("Veterinário")){
					Veterinario *ve = new Veterinario();
					ve->lerAtributos();
					ve->Insert(ve,"funcionarios","Veterinário");
					delete(ve);
					return 1;
				}
				else if(!this->command[2].compare("Tratador")){
					Tratador *tr = new Tratador();
					tr->lerAtributos();
					tr->Insert(tr,"funcionarios","Tratador");
					delete(tr);
					return 1;
				}
				else{
					return -3;
				}
			}
			else if(!this->command[1].compare("animal")){
				if(!this->command[2].compare("Anfíbio")){
					
					Anfibio *an = new Anfibio();
					an->lerAtributos();
					an->Insert(an,"animais","Ave");
					delete(an);
					return 1;
				}
				else if(!this->command[2].compare("Ave")){
					Ave *av = new Ave();
					av->lerAtributos();
					av->Insert(av,"animais","Ave");
					delete(av);
					return 1;
				}
				else if(!this->command[2].compare("Mamífero")){
					Mamifero *ma = new Mamifero();
					ma->lerAtributos();
					ma->Insert(ma,"animais","Mamífero");
					delete(ma);
					return 1;
				}
				else if(!this->command[2].compare("Réptil")){
					Reptil *re = new Reptil();
					re->lerAtributos();
					re->Insert(re,"animais","Réptil");
					delete(re);
					return 1;
				}
				else{
					return -4;
				}
			}
			else{
				return -5;
			}
		}
		else if(!this->command[0].compare("delete")){
			if(!this->command[1].compare("funcionario")){
				Tratador *t = new Tratador();
				t->Delete(t,"funcionarios",10,this->command[2]);
				delete(t);
				return 1;		}
			else if(!this->command[1].compare("animal")){
				Anfibio  *a = new Anfibio();
				a->Delete(a,"animais",17,this->command[2]);
				delete(a);
				return 1;
			}
			else{
				return 0;
			}
		}
		else if(!this->command[0].compare("update")){
			if(!this->command[1].compare("funcionario")){

			}
			else if(!this->command[1].compare("animal")){

			}
			else{

			}
		}
		else if(!this->command[0].compare("show")){
			if(!this->command[1].compare("funcionarios")){
				if(!this->command[2].compare("Tratador")){
					Tratador 	*t 	= new Tratador();
					t->makeList("funcionarios",10);
					this->clear();
					t->showAtributos();
					t->showList("Tratador");
					delete(t);
					return 1;
				}
				else if(!this->command[2].compare("Veterinário")){
					Veterinario *v 	= new Veterinario();
					v->makeList("funcionarios",10);
					this->clear();			
					v->showAtributos();
					v->showList("Veterinário");
					delete(v);
					return 1;
				}
			}
			else if(!this->command[1].compare("animais")){
				if(!this->command[2].compare("Anfíbio")){
					Anfibio 	*an = new Anfibio();
					this->clear();
					an->makeList("animais",17);
					an->showAtributos();
					an->showList("Anfíbio");					
					delete(an);
					return 1;
				}
				else if(!this->command[2].compare("Ave")){
					Ave 		*av = new Ave();
					this->clear();
					av->makeList("animais",17);		
					this->clear();
					av->showAtributos();
					av->showList("Ave");					
					delete(av);
					return 1;
				}
				else if(!this->command[2].compare("Mamífero")){
					Mamifero 	*ma = new Mamifero();
					ma->makeList("animais",17);					
					this->clear();
					ma->showAtributos();
					ma->showList("Mamífero");
					delete(ma);
					return 1;
				}
				else if(!this->command[2].compare("Réptil")){
					Reptil 		*re = new Reptil();
					re->makeList("animais",17);					
					this->clear();
					re->showAtributos();
					re->showList("Réptil");			
					delete(re);
					return 1;
				}	
			}
			else{
				return -8;
			}
		return 0;		
		}
	}
	else if(this->getNumWords() == 6){
		if(!this->command[0].compare("update")){
			if(!this->command[1].compare("animal")){
				if(!this->command[2].compare("Anfíbio")){
					Anfibio *an = new Anfibio();
					for(int i = 0;i < (int)an->getAtributos().size();i++){
						if(this->command[3].compare(an->getAtributos()[i])){
							if(an->is_number(command[4])){
								an->makeList("animais",17);
								if(an->existeId(command[4])){
									an->Update(an,"animais",command[4],i,17,command[5]);
									delete(an);
									return 1;
								}
								else{
									delete(an);
									return 0;
								}
							}
							else{
								return 0;
							}
						}
					}
					return 0;
				}
				else if(!this->command[2].compare("Ave")){
					Ave *av = new Ave();
					for(int i = 0;i < (int)av->getAtributos().size();i++){
						if(this->command[3].compare(av->getAtributos()[i])){
							if(av->is_number(command[4])){
								av->makeList("animais",17);
								if(av->existeId(command[4])){
									av->Update(av,"animais",command[4],i,17,command[5]);
									delete(av);
									return 1;
								}
								else{
									delete(av);
									return 0;
								}
							}
							else{
								return 0;
							}
						}
					}
					return 0;
				}
				else if(!this->command[2].compare("Mamífero")){
					Mamifero *ma = new Mamifero();
					for(int i = 0;i < (int)ma->getAtributos().size();i++){
						if(this->command[3].compare(ma->getAtributos()[i])){
							if(ma->is_number(command[4])){
								ma->makeList("animais",17);
								if(ma->existeId(command[4])){
									ma->Update(ma,"animais",command[4],i,17,command[5]);
									delete(ma);
									return 1;
								}
								else{
									delete(ma);
									return 0;
								}
							}
							else{
								return 0;
							}
						}
					}
					return 0;
				}
				else if(!this->command[2].compare("Réptil")){
					Reptil *re = new Reptil();
					for(int i = 0;i < (int)re->getAtributos().size();i++){
						if(this->command[3].compare(re->getAtributos()[i])){
							if(re->is_number(command[4])){
								re->makeList("animais",17);
								if(re->existeId(command[4])){
									re->Update(re,"animais",command[4],i,17,command[5]);
									delete(re);
									return 1;
								}
								else{
									delete(re);
									return 0;
								}
							}
							else{
								return 0;
							}
						}
					}
					return 0;
				}
				else{
					return 0;
				}
			}
			else if(!this->command[1].compare("funcionario")){
				if(!this->command[2].compare("Veterinário")){
					Veterinario *ve = new Veterinario();
					for(int i = 0;i < (int)ve->getAtributos().size();i++){
						if(this->command[3].compare(ve->getAtributos()[i])){
							if(ve->is_number(command[4])){
								ve->makeList("funcionarios",10);
								if(ve->existeId(command[4])){
									ve->Update(ve,"funcionarios",command[4],i,10,command[5]);
									delete(ve);
									return 1;
								}
								else{
									delete(ve);
									return 0;
								}
							}
							else{
								return 0;
							}
						}
					}
					return 0;
				}
				else if(!this->command[2].compare("Tratador")){
					Tratador *tr = new Tratador();
					for(int i = 0;i < (int)tr->getAtributos().size();i++){
						if(this->command[3].compare(tr->getAtributos()[i])){
							if(tr->is_number(command[4])){
								tr->makeList("funcionarios",10);
								if(tr->existeId(command[4])){
									tr->Update(tr,"funcionarios",command[4],i,10,command[5]);
									delete(tr);
									return 1;
								}
								else{
									delete(tr);
									return 0;
								}
							}
							else{
								return 0;
							}
						}
					}
					return 0;
				}
				else{
					return 0;
				}
			}
			else{
				return 0;
			}
		}
		else{
			return 0;
		}
	}
	return 0;
}

vector<string> Command::getWords(string command){

	vector<string> commandWords;
	string aux(command);
	if(command.size() == 0 || command[0] == ' '){
		return commandWords;
	}
	else{
		istringstream iss(command);
		string token;
		while(getline(iss, token, ' ')){
			commandWords.push_back(token);
		}
	}

	return commandWords;

}

void Command::man(void){

	clear();
	
	cout << "##########################################################################################################################\n";
	cout << "#							PetFera					 	  		 #\n";
	cout << "##########################################################################################################################\n";
	cout << "#							manual							   	 #\n";
	cout << "##########################################################################################################################\n";
	cout << "##########################################################################################################################\n";
	cout << "#														 	 #\n";
	cout << "#	show funcionarios <filtro>				- Mostra a lista com todos os dados dos funcionários 	 #\n";
	cout << "#	show animais <filtro>					- Mostra a lista com todos os dados dos animais		 #\n";
	cout << "#	insert funcionario <filtro>				- Insere o cadastro de um novo funcionário		 #\n";
	cout << "#	delete funcionario <Id>	        			- Deleta o cadastro de um funcionário 	 		 #\n";
	cout << "#	update funcionario <filtro> <campo> <Id> <valor>	        			- Altera o cadastro de um funcionário 			 #\n";
	cout << "#	insert animal <filtro>  				- Insere um novo animal 				 #\n";
	cout << "#	delete animal <Id>					- Deleta o cadastro de um animal 	 	 	 #\n";
	cout << "#	update animal <filtro> <campo> <Id> <valor>				- Altera o cadastro de um animal		 	 #\n";
	cout << "##########################################################################################################################\n";
	cout << "#	filtros	funcionários					- Tratador, Veterinário					 #\n";
	cout << "#	filtros	animais						- Anfíbio, Ave, Mamífero, Réptil			 #\n";
	cout << "##########################################################################################################################\n";	
	cout << "#	man							- Mostra o manual do sistema				 #\n";
	cout << "#	clear							- Limpa a tela do sistema				 #\n";
	cout << "#	quit							- Sair do sistema					 #\n";
	cout << "##########################################################################################################################\n\n";

}

void Command::clear(void){
	system("clear");
}

Command::~Command(){

}