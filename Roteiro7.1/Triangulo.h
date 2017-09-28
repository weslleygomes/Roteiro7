#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FigurasGeometricas.h"

class Triangulo : public FigurasGeometricas
{
		float base, altura;
	public:
		Triangulo();
		virtual ~Triangulo();
		float calcularArea();
		void setBase(float base);
		void setAltura(float altura);
	protected:
		std::string nome;
};
#endif
