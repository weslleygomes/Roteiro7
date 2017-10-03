#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

class Trabalhador : public TrabalhadorPorHora, public TrabalhadorAssalariado
{
	public:
		float calcularPagamento(int Horas, int x);
	protected:
};

#endif
