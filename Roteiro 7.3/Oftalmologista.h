#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"

class Oftalmologista:public Medico
{
	public:
		virtual void fazerCirurgia();
		virtual void fazerAtendimento();
		void setOftalmologista(std::string n, float alt, int pe, std::string nomeC);
	private:
		std::string nome;
		float altura;
		int peso;
		std::string nomeDoCurso;
};

#endif
