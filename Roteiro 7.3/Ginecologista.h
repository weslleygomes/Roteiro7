#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"

class Ginecologista:public Medico
{
	public:
		virtual void fazerCirurgia();
		virtual void fazerAtendimento();
		void setGinecologista(std::string n, float alt, int pe, std::string nomeC);		
	private:
		std::string nome;
		float altura;
		int peso;
		std::string nomeDoCurso;	
};

#endif
