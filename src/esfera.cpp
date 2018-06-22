/**
* @file 	esfera.cpp
* @brief    Arquivo de corpo contendo a definição de funções que realizam
*           o calculo da area e volume da esfera
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
* @sa       /include/esfera.h
*/

#include "esfera.h"



/**
* @brief Construtor paramatrizado
* @param _r Raio da Esfera
*/
Esfera::Esfera(float r): raio(r){}

/**
* @brief Destrutor padrão
*/
Esfera::~Esfera(){}

/**
* @brief	Função que calcula a area da Esfera
* @param    Float com o Raio da Esfera
* @return   Area da Esfera
*/
float 
Esfera::areaEsfera(float raio)
{	
	if (raio <= 0)
	{
		throw "Nao podemos calcular area de raio negativo ou igual a 0(zero)!";
	}
	else{
		return 4 * (PI * pow(raio, 2));
	}
	
}

/**
* @brief	Função que calcula o volume da Esfera
* @param    Float com o Raio da Esfera
* @return   Volume da Esfera
*/
float 
Esfera::volumeEsfera(float raio)
{
	if (raio <= 0)
	{
		throw "Nao podemos calcular volume de raio negativo ou igual a 0(zero)!";
	}
	else{
		return (4 * PI * pow(raio, 3)) / 3;
	}
		
}