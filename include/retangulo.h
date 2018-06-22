/**
* @file 	retangulo.h
* @brief    Arquivo cabeçalho contendo a definição de funções que realizam
*           o calculo da area e perimetro do retangulo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
*/


#ifndef RETANGULO_H
#define RETANGULO_H


/**
* @brief Classe Retangulo
*/
class Retangulo
{
private:
	float base;
	float altura;

public:

	/**
	* @brief Construtor paramatrizado
	* @param _b Base do Retangulo
	* @param _a Altura do Retangulo
	*/
	Retangulo(float b, float a);
	
	/**
	* @brief Destrutor padrão
	*/
	~Retangulo();
	
	/**
	* @brief	Função que calcula a area do Retangulo
	* @param    Float com a base do Retangulo
	* @param    Float com a altura do Retangulo
	* @return   Area do Retangulo
	*/
	float areaRetangulo(float, float);

	/**
	* @brief	Função que calcula o perimetro do Retangulo
	* @param    Float com a base do Retangulo
	* @param    Float com a altura do Retangulo
	* @return   Perimetro do Retangulo
	*/
	float perimetroRetangulo(float, float);

};

#endif