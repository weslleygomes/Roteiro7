#include "Otorrino.h"
using namespace std;

void Otorrino::fazerAtendimento(){
	cout << "Fazendo cirurgia com Otorrino: "<< nome << endl;
}

void Otorrino::fazerCirurgia(){
	cout <<"Realizando consulta com Otorrino: " << nome << endl;
}

void Otorrino::setOtorrino(string n, float alt, int pe, string nomeC){
	nome =n;
	altura = alt;
	peso = pe;
	nomeDoCurso = nomeC;
}

