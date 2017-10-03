#include <iostream>
#include "Trabalhador.h"

using namespace std;

int main() {
	Trabalhador t;
	string nome;
	float salario;
	int es, x;
	
	cout << "Digite o nome do Trabalhador: ";
	cin >> nome;
	cout <<"Digite o quando por hora ele ganha: ";
	cin >> salario;
	cout <<"Digite quantas horas ele trabalhou: ";
	cin >> x;
	cout << "O trabalhador eh por 1 - assalariado ou 2 - por hora?: ";
	cin >> es;
	if(es == 1){
		t.setTrab1(nome, salario);
		cout<<"Ele recebeu: " << t.calcularPagamento(x, es) << " Esse Mes.";
		
	}else{
		t.setTrab(nome, salario);
	cout<<"Ele recebeu: " << t.calcularPagamento(x, es) << " Esse Mes.";
	}
	return 0;
}
