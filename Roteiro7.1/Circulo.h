#ifndef CIRCULO_H
#define CIRCULO_H
#include "FigurasGeometricas.h"

class Circulo : public FigurasGeometricas
{
		float raio;
	public:
		Circulo();
		virtual ~Circulo();
		float calcularArea();
		void setRaio(float raio);
	protected:
		std::string nome;
};
#endif
