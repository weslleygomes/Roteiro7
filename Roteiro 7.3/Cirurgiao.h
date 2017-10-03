#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"

class Cirurgiao:public Medico
{
	public:
	    void fazerCirurgia();
		void fazerAtendimento();
		void setCirurgiao(std::string n, float alt, int pe, std::string nomeC);
	private:
		std::string nome;
		float altura;
		int peso;
		std::string nomeDoCurso;
};

#endif
