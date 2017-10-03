#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

class Funcionario
{
	public:
		void getSalario();
		void setMatricula(int x);
		void setSalario(int y);
		void setNome(std::string z);
	protected:
		int matricula;
		std::string nome;
		float salario;
};

#endif
