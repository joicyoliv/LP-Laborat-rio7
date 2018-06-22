/**
* @file 	paralelepipedo.h
* @brief    Arquivo cabeçalho contendo a definição de funções que realizam
*           o calculo da area e volume do paralelepipedo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
*/

#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H

/**
* @brief Classe paralelepipedo
*/
class Paralelepipedo
{
private:
	float aresta1;
	float aresta2;
	float aresta3;

public:

	/**
	* @brief Construtor paramatrizado
	* @param _a1 Aresta1 do Paralelepipedo
	* @param _a2 Aresta2 do Paralelepipedo
	* @param _a3 Aresta3 do Paralelepipedo
	*/
	Paralelepipedo(float a1, float a2, float a3);

	/**
	* @brief Destrutor padrão
	*/
	~Paralelepipedo();

	/**
	* @brief	Função que calcula a area do Paralelepipedo
	* @param _aresta1 Aresta1 do Paralelepipedo
	* @param _aresta2 Aresta2 do Paralelepipedo
	* @param _aresta3 Aresta3 do Paralelepipedo
	* @return   Area do Paralelepipedo
	*/
	float areaParalelepipedo(float aresta1, float aresta2, float aresta3);

	/**
	* @brief	Função que calcula o volume do Paralelepipedo
	* @param _aresta1 Aresta1 do Paralelepipedo
	* @param _aresta2 Aresta2 do Paralelepipedo
	* @param _aresta3 Aresta3 do Paralelepipedo
	* @return   Volume do Paralelepipedo
	*/
	float volumeParalelepipedo(float aresta1, float aresta2, float aresta3);

};

#endif