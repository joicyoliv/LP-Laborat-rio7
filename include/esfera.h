/**
* @file 	esfera.h
* @brief    Arquivo cabeçalho contendo a definição de funções que realizam
*           o calculo da area e volume da esfera
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
*/

#ifndef ESFERA_H
#define ESFERA_H

#include <cmath>

/**
* @brief   		Constante PI
* @param PI     Constante que representa o número 3.1415
*/
#define PI 3.1415

/**
* @brief Classe Esfera
*/
class Esfera
{
private:
	float raio;

public:

	/**
	* @brief Construtor paramatrizado
	* @param _r Raio da Esfera
	*/
	Esfera(float r);

	/**
	* @brief Destrutor padrão
	*/
	~Esfera();

	/**
	* @brief	Função que calcula a area da Esfera
	* @param    Float com o Raio da Esfera
	* @return   Area da Esfera
	*/
	float areaEsfera(float);

	/**
	* @brief	Função que calcula a volume da Esfera
	* @param    Float com o Raio da Esfera
	* @return   Volume da Esfera
	*/
	float volumeEsfera(float);
};


#endif