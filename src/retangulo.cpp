/**
* @file 	retangulo.cpp
* @brief    Arquivo de corpo contendo a definição de funções que realizam
*           o calculo da area e perimetro do retangulo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
* @sa       /include/retangulo.h
*/
#include "retangulo.h"

/**
* @brief Construtor paramatrizado
* @param _b Base do Retangulo
* @param _a Altura do Retangulo
*/
Retangulo::Retangulo(float b, float a):base(b), altura(a){}

/**
* @brief Destrutor padrão
*/
Retangulo::~Retangulo(){}

/**
* @brief	Função que calcula a area do Retangulo
* @param    Float com a base do Retangulo
* @param    Float com a altura do Retangulo
* @return   Area do Retangulo
*/
float
Retangulo::areaRetangulo(float base, float altura)
{
	if (base <= 0 || altura <= 0)
	{
		throw "Nao podemos calcular area de base ou altura negativa ou igual a 0(zero)!";
	}
	else{
		return base * altura;
	}
	
}

/**
* @brief	Função que calcula a perimetro do Retangulo
* @param    Float com a base do Retangulo
* @param    Float com a altura do Retangulo
* @return   Perimetro do Retangulo
*/
float
Retangulo::perimetroRetangulo(float base, float altura)
{
	if (base <= 0 ||  altura <= 0)
	{
		throw "Nao podemos calcular perimetro de base ou altura negativa ou igual a 0(zero)!";
	}
	else{
		return 2 * (base + altura);
	}
	
}
