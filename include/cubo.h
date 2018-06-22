/**
* @file 	cubo.h
* @brief    Arquivo cabeçalho contendo a definição de funções que realizam
*           o calculo da area e volume do cubo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
*/

#ifndef CUBO_H
#define CUBO_H

#include <cmath>

/**
* @brief Classe Cubo
*/
class Cubo
{
private:
	float aresta;

public:

	/**
	* @brief Construtor paramatrizado
	* @param _a Aresta do cubo
	*/
	Cubo(float a);

	/**
	* @brief Destrutor padrão
	*/
	~Cubo();

	/**
	* @brief	Função que calcula a area do Cubo
	* @param    Float com a aresta do Cubo
	* @return   Area do Cubo
	*/
	float areaCubo(float);

	/**
	* @brief	Função que calcula a volume do Cubo
	* @param    Float com a aresta do Cubo
	* @return   Volume do Cubo
	*/
	float volumeCubo(float);
};


#endif