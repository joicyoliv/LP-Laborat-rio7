/**
* @file 	piramide.h
* @brief    Arquivo cabeçalho contendo a definição de funções que realizam
*           o calculo da area e volume da piramide
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
*/

#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <cmath>

/**
* @brief Classe Piramide
*/
class Piramide
{
private:
	float base;
	float altura;

public:

	/**
	* @brief Construtor paramatrizado
	* @param _a Base da Piramide
	* @param _b Altura da Piramide
	*/
	Piramide(float b, float a);

	/**
	* @brief Destrutor padrão
	*/
	~Piramide();

	/**
	* @brief	Função que calcula a area da Piramide
	* @param _base Base da Piramide
	* @param _altura Altura da Piramide
	* @return   Area da Piramide
	*/	
	float areaPiramide(float base, float altura);

	/**
	* @brief	Função que calcula o volume da Piramide
	* @param _base Base da Piramide
	* @param _altura Altura da Piramide
	* @return   Volume da Piramide
	*/
	float volumePiramide(float base, float altura);
};

#endif