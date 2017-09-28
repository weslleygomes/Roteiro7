#ifndef QUADRADO_H
#define QUADRADO_H
#include "FigurasGeometricas.h"

class Quadrado : public FigurasGeometricas
{
		float base;
	public:
		Quadrado();
		virtual ~Quadrado();
		float calcularArea();
		void setBase(float base);
	protected:
		std::string nome;
};
#endif
