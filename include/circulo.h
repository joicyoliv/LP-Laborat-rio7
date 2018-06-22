/**
* @file 	circulo.h
* @brief    Arquivo cabeçalho contendo a definição de funções que realizam
*           o calculo da area e perimetro do circulo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
*/


#ifndef CIRCULO_H
#define CIRCULO_H

#include <math.h>

/**
* @brief   		Constante PI
* @param PI     Constante que representa o número 3.1415
*/
#define PI 3.1415

/**
* @brief Classe Circulo
*/
class Circulo
{
private:
	float raio;

public:

	/**
	* @brief Construtor paramatrizado
	* @param _r Raio do circulo
	*/
	Circulo(float r);

	/**
	* @brief Destrutor padrão
	*/
	~Circulo();

	/**
	* @brief	Função que calcula a area do Circulo
	* @param    Float com o raio do Circulo
	* @return   Area do Circulo
	*/
	float areaCirculo(float);

	/**
	* @brief	Função que calcula o perimetro do Circulo
	* @param    Float com o raio do Circulo
	* @return   Perimetro do Circulo
	*/
	float perimetroCirculo(float);

};



#endif