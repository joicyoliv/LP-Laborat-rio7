/**
* @file 	quadrado.cpp
* @brief    Arquivo de corpo contendo a definição de funções que realizam
*           o calculo da area e perimetro do quadrado
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
* @sa       /include/quadrado.h
*/

#include "quadrado.h"

/**
* @brief Construtor paramatrizado
* @param _lado Lados do Quadrado
*/
Quadrado::Quadrado(float lado): lados(lado){}

/**
* @brief Destrutor padrão
*/
Quadrado::~Quadrado(){}

/**
* @brief	Função que calcula a area do Quadrado
* @param    Float com o lado do Quadrado
* @return   Area do Quadrado
*/
float 
Quadrado::areaQuadrado(float lados)
{
	if (lados <= 0)
	{
		throw "Nao podemos calcular area de lado negativo ou igual a 0(zero)!";
	}
	else{
		return lados * lados;
	}
	
}

/**
* @brief	Função que calcula o perimetro do Quadrado
* @param    Float com o lado do Quadrado
* @return   Perimetro do Quadrado
*/
float 
Quadrado::perimetroQuadrado(float lados)
{
	if (lados <= 0)
	{
		throw "Nao podemos calcular perimetro de lado negativo ou igual a 0(zero)!";
	}
	else{
		return 4 * lados;
	}

	
}