#include "Ginecologista.h"
using namespace std;

void Ginecologista::fazerAtendimento(){
	cout << "Fazendo cirurgia com Ginecologista: "<< nome << endl;
}

void Ginecologista::fazerCirurgia(){
	cout <<"Realizando consulta com Ginecologista: " << nome << endl;
}

void Ginecologista::setGinecologista(string n, float alt, int pe, string nomeC){
	nome =n;
	altura = alt;
	peso = pe;
	nomeDoCurso = nomeC;
}
