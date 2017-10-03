#include "Cirurgiao.h"
using namespace std;

void Cirurgiao::fazerCirurgia(){
	cout << "Fazendo cirurgia com Cirurgiao: "<< nome << endl;
}

void Cirurgiao::fazerAtendimento(){
	cout <<"Realizando consulta com Cirurgiao: " << nome << endl;
}

void Cirurgiao::setCirurgiao(string n, float alt, int pe, string nomeC){
	nome =n;
	altura = alt;
	peso = pe;
	nomeDoCurso = nomeC;
}
