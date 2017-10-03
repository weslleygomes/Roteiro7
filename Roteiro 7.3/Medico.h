#ifndef MEDICO_H
#define MEDICO_H
#include <string>
#include <iostream>

class Medico
{
	public:
		virtual void fazerCirurgia() = 0;
		virtual void fazerAtendimento() = 0;
	protected:
};

#endif
