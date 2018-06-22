/**
* @file 	triangulo.cpp
* @brief    Arquivo de corpo contendo a definição de funções que realizam
*           o calculo da area e perimetro do triagulo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
* @sa       /include/triangulo.h
*/

#include "triangulo.h"

/**
* @brief Construtor paramatrizado
* @param _l Lados do Triangulo
* @param _a Altura do Triangulo
*/
Triangulo::Triangulo(float l, float a): lados(l), altura(a){}

/**
* @brief Destrutor padrão
*/
Triangulo::~Triangulo(){}

/**
* @brief	Função que calcula a area do Triangulo
* @param    Float com o lado do Triangulo
* @param    Float com a altura do Triangulo
* @return   Area do Triangulo
*/
float 
Triangulo::areaTriangulo(float lados, float altura)
{	
	if (lados <= 0 || altura <= 0)
	{
		throw "Nao podemos calcular area de lado ou altura negativaou igual a 0(zero)!";
	}
	else{
		return (lados * altura) / 2;
	}
}

/**
* @brief	Função que calcula o perimetro do Triangulo
* @param    Float com o lado do Triangulo
* @return   Perimetro do Triangulo
*/
float 
Triangulo::perimetroTriangulo(float lados)
{	
	if (lados <= 0)
	{
		throw "Nao podemos calcular perimetro de lado negativo ou igual a 0(zero)!";
	}
	else{
		return 3 * lados;
	}
}