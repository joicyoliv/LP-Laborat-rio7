/**
* @file 	cubo.cpp
* @brief    Arquivo de corpo contendo a definição de funções que realizam
*           o calculo da area e volume do cubo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
* @sa       /include/cubo.h
*/

#include "cubo.h"

/**
* @brief Construtor paramatrizado
* @param _a Aresta do cubo
*/
Cubo::Cubo(float a): aresta(a){}

/**
* @brief Destrutor padrão
*/
Cubo::~Cubo(){}

/**
* @brief	Função que calcula a area do Cubo
* @param    Float com a aresta do Cubo
* @return   Area do Cubo
*/
float 
Cubo::areaCubo(float aresta)
{
	if (aresta <= 0)
	{
		throw "Nao podemos calcular area de aresta negativa ou igual a 0(zero)!";
	}
	else{
		return 6 * pow(aresta, 2);
	}
	
}

/**
* @brief	Função que calcula o volume do Cubo
* @param    Float com a aresta do Cubo
* @return   Volume do Cubo
*/
float 
Cubo::volumeCubo(float aresta)
{	
	if (aresta <= 0)
	{
		throw "Nao podemos calcular volume de aresta negativa ou igual a 0(zero)!";
	}
	else{
		return pow(aresta, 3);
	}
	
}