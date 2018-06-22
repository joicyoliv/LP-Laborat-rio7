/**
* @file 	piramide.cpp
* @brief    Arquivo de corpo contendo a definição de funções que realizam
*           o calculo da area e volume da piramide
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
* @sa       /include/piramide.h
*/

#include "piramide.h"

/**
* @brief Construtor paramatrizado
* @param _a Base da Piramide
* @param _b Altura da Piramide
*/
Piramide::Piramide(float b, float a):base(b), altura(a){}

/**
* @brief Destrutor padrão
*/
Piramide::~Piramide(){}

/**
* @brief	Função que calcula a area da Piramide
* @param _base Base da Piramide
* @param _altura Altura da Piramide
* @return   Area da Piramide
*/
float 
Piramide::areaPiramide(float base, float altura)
{
	if (base <= 0 || altura <= 0)
	{
		throw "Nao podemos calcular area de base ou altura negativa ou igual a 0(zero)!";
	}
	else{
		return (pow(base, 2) + ( 4 * ((base * altura) / 2) ) );
	}
	
}

/**
* @brief	Função que calcula o volume da Piramide
* @param _base Base da Piramide
* @param _altura Altura da Piramide
* @return   Volume da Piramide
*/
float
Piramide::volumePiramide(float base, float altura)
{
	if (base <= 0 || altura <= 0)
	{
		throw "Nao podemos calcular volume de base ou altura negativa ou igual a 0(zero)!";
	}
	else{
		return (pow(base, 2) * altura) / 3;
	}
}

