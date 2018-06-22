/**
* @file 	paralelepipedo.cpp
* @brief    Arquivo de corpo contendo a definição de funções que realizam
*           o calculo da area e volume do paralelepipedo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
* @sa       /include/paralelepipedo.h
*/

#include "paralelepipedo.h"

/**
* @brief Construtor paramatrizado
* @param _a1 Aresta1 do Paralelepipedo
* @param _a2 Aresta2 do Paralelepipedo
* @param _a3 Aresta3 do Paralelepipedo
*/
Paralelepipedo::Paralelepipedo(float a1, float a2, float a3)
{
	aresta1 = a1;
	aresta2 = a2;
	aresta3 = a3;
}

/**
* @brief Destrutor padrão
*/
Paralelepipedo::~Paralelepipedo(){}

/**
* @brief	Função que calcula a area do Paralelepipedo
* @param _aresta1 Aresta1 do Paralelepipedo
* @param _aresta2 Aresta2 do Paralelepipedo
* @param _aresta3 Aresta3 do Paralelepipedo
* @return   Area do Paralelepipedo
*/
float 
Paralelepipedo::areaParalelepipedo(float aresta1, float aresta2, float aresta3)
{
	if (aresta1 <= 0 || aresta2 <= 0 || aresta3 <= 0)
	{
		throw "Nao podemos calcular area de arestas negativa ou igual a 0(zero)!";
	}
	else{
		return ( 2 * aresta1 * aresta2 ) + ( 2 * aresta1 * aresta3 ) + ( 2 * aresta2 * aresta3 );
	}
	
}

/**
* @brief	Função que calcula o volume do Paralelepipedo
* @param _aresta1 Aresta1 do Paralelepipedo
* @param _aresta2 Aresta2 do Paralelepipedo
* @param _aresta3 Aresta3 do Paralelepipedo
* @return   Volume do Paralelepipedo
*/
float 
Paralelepipedo::volumeParalelepipedo(float aresta1, float aresta2, float aresta3)
{
	if (aresta1 <= 0 || aresta2 <= 0 || aresta3 <= 0)
	{
		throw "Nao podemos calcular volume de arestas negativa ou igual a 0(zero)!";
	}
	else{
		return aresta1 * aresta2 * aresta3;
	}

	
}