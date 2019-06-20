#include "Data.class.h"

Data::Data(){

}

Data::~Data(){
	delete this->data;
}

Data::showData(){
	cout << this->data.dia << "/" << this->data.mes << "/" << this->data.ano << endl;
}

myDate Data::getData(){
	return to_string(this->data.dia) + "/" + to_string(this-data.>mes) + "/" + to_string(this->data.ano);
}

void Data::setData(myDate data){
	this->data = data;
}

bool Data::verificaData(myDate data){
	return true;
}