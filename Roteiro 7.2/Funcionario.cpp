#include "Funcionario.h"


using namespace std;

void Funcionario::getSalario(){
	cout << "O salario do funcionario: " << nome <<"  eh:" << salario << endl;
}

void Funcionario::setMatricula(int x){
	matricula = x;
}

void Funcionario::setNome(string z){
	nome = z;
}

void Funcionario::setSalario(int y){
	salario = y;
}

