#include <iostream>
#include "Consultor.h"
using namespace std;

int main() {
	Funcionario f;
	Consultor c;
	
	int matricula;
	float salario, p;
	string nome;
	
	cout <<"Digite o nome do funcionario: ";
	cin >> nome;
	cout <<"Digite a matricula?: ";
	cin >> matricula;
	cout <<"Digite o Salario; ";
	cin >> salario;
	
	f.setNome(nome);
	f.setMatricula(matricula);
	f.setSalario(salario);
	
	f.getSalario();
	
	cout << "Digite o percentual que voce quer adicionar ao salario: ";
	cin >> p;
	c.setValor(nome, salario);
	c.getSalario();
	c.getSalario(p);
	
	return 0;
}
