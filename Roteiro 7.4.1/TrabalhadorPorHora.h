#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include <string>

class TrabalhadorPorHora
{
	public:
		void setTrab(std::string n, float s);
	protected:
	    std::string nome;
	    float salario;
};

#endif
