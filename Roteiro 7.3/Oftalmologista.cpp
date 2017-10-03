#include "Oftalmologista.h"
using namespace std;

void Oftalmologista::fazerAtendimento(){
	cout << "Fazendo cirurgia com Oftalmologista: "<< nome << endl;
}

void Oftalmologista::fazerCirurgia(){
	cout <<"Realizando consulta com Oftalmologista: " << nome << endl;
}

void Oftalmologista::setOftalmologista(string n, float alt, int pe, string nomeC){
	nome =n;
	altura = alt;
	peso = pe;
	nomeDoCurso = nomeC;
}
