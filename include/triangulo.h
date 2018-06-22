/**
* @file 	triangulo.h
* @brief    Arquivo cabeçalho contendo a definição de funções que realizam
*           o calculo da area e perimetro do triagulo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
*/

#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <cmath>

/**
* @brief Classe Triangulo
*/
class Triangulo
{
private:
	float lados;
	float altura;

public:

	/**
	* @brief Construtor paramatrizado
	* @param _l Lados do Triangulo
	* @param _a Altura do Triangulo
	*/
	Triangulo(float l, float a);

	/**
	* @brief Destrutor padrão
	*/
	~Triangulo();

	/**
	* @brief	Função que calcula a area do Triangulo
	* @param    Float com o lado do Triangulo
	* @param    Float com a altura do Triangulo
	* @return   Area do Triangulo
	*/
	float areaTriangulo(float, float);

	/**
	* @brief	Função que calcula o perimetro do Triangulo
	* @param    Float com o lado do Triangulo
	* @return   Perimetro do Triangulo
	*/
	float perimetroTriangulo(float);

};

#endif
