#ifndef FIGURAS_GEOMETRICAS_H
#define FIGURAS_GEOMETRICAS_H
#include <iostream>

class FigurasGeometricas
{
	public:
		FigurasGeometricas();
		virtual ~FigurasGeometricas();
		virtual float calcularArea()=0;
		void setNome(std::string nome);
		std::string getNome();
	protected:
		std::string nome;
};
#endif
