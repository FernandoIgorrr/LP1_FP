#pragma once
#include <iostream>

using namespace std;

/**
 *  @brief Struct myDate para manipulação de datas
 *  @author Fernando Igor Dantas
 *
 *  @since 17-06-2019
 *  */

struct myDate{
	short dia;
	short mes;
	short ano;
};

void showData(myDate data);

bool verificaData(myDate data);
