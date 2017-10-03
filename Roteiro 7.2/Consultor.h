#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor:public Funcionario
{
	public:
		void getSalario();
		void getSalario(float percentual);
		void setValor(std::string n, float f);
	private:
		std::string no;
		float sala;
};

#endif
