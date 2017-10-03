#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"

class Otorrino:public Medico
{
	public:
		virtual void fazerCirurgia();
		virtual void fazerAtendimento();
		void setOtorrino(std::string n, float alt, int pe, std::string nomeC);		
	private:
		std::string nome;
		float altura;
		int peso;
		std::string nomeDoCurso;
};

#endif
