/**
* @file 	quadrado.h
* @brief    Arquivo cabeçalho contendo a definição de funções que realizam
*           o calculo da area e perimetro do quadrado
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
*/

#ifndef QUADRADO_H
#define QUADRADO_H


/**
* @brief Classe Quadrado
*/
class Quadrado
{
private:
	float lados;

public:

	/**
	* @brief Construtor paramatrizado
	* @param _lado Lados do Quadrado
	*/
	Quadrado(float lado);

	/**
	* @brief Destrutor padrão
	*/
	~Quadrado();
	
	/**
	* @brief	Função que calcula a area do Quadrado
	* @param    Float com o lado do Quadrado
	* @return   Area do Quadrado
	*/
	float areaQuadrado(float);

	/**
	* @brief	Função que calcula o perimetro do Quadrado
	* @param    Float com o lado do Quadrado
	* @return   Perimetro do Quadrado
	*/
	float perimetroQuadrado(float);
	
};

#endif