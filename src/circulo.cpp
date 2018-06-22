/**
* @file 	circulo.cpp
* @brief    Arquivo de corpo contendo a definição de funções que realizam
*           o calculo da area e perimetro do circulo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
* @sa       /include/circulo.h
*/

#include "circulo.h"

/**
* @brief Construtor paramatrizado
* @param _r Raio do Circulo
*/
Circulo::Circulo(float r):raio(r)
{
	
}

/**
* @brief Destrutor padrão
*/
Circulo::~Circulo(){}

/**
* @brief	Função que calcula a area do Circulo
* @param    Float com o raio do Circulo
* @return   Area do Circulo
*/
float
Circulo::areaCirculo(float raio)
{
	if (raio <= 0)
	{
		throw "Nao podemos calcular area de raio negativo ou igual a 0(zero)!";
	}
	else{
		return PI * pow(raio, 2);
	}
	
}

/**
* @brief	Função que calcula o perimetro do Circulo
* @param    Float com o raio do Circulo
* @return   Perimetro do Circulo
*/
float 
Circulo::perimetroCirculo(float raio)
{	
	if (raio <= 0)
	{
		throw "Nao podemos calcular perimetro de raio negativo ou igual a 0(zero)!";
	}
	else{
		return 2 * (PI * raio);
	}
	
}