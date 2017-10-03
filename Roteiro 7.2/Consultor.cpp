#include "Consultor.h"

using namespace std;

void Consultor::setValor(std::string n, float f){
	no = n;
	sala =f;
}

void Consultor::getSalario(float percentual){
	cout <<	"O funcionario: " << no <<" com o adicional de "<< percentual <<" eh:" << ((percentual/100)*sala)+sala << endl;

}

void Consultor::getSalario(){
	cout << "O funcionario: " << no <<"  com 10 porcento de aumento eh: " << (sala*0.1)+sala << endl;
}


