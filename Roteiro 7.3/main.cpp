#include <iostream>
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;

int main() {
	Cirurgiao c;
	Oftalmologista o;
	Otorrino ot;
	Ginecologista g;
	
	int a, es;
	string nome;
	float altura;
	int peso;
	string curso;
	
	cout << "Digite que tipo que Medico voce procura:\n1 - Cirurgiao.\n2 - Oftalmologista.\n3 - Otorrino.\n4 - Ginecologista." << endl;
	cin >> a;
	
	switch(a){
		case 1:
			cout << "Digite o nome do medico: ";
			cin >> nome;
			cout <<"Digite a altura do medico: ";
			cin >>altura;
			cout <<"Digite o peso do medico: ";
			cin >> peso;
			cout <<"Digite o curso do medico: ";
			cin >> curso;
			cout <<"Voce deseja fazer 1 - Consulta ou 2 - Realizar cirurgia: ";
			cin >> es;
			c.setCirurgiao(nome,altura,peso,curso);
			if(es == 1){
				c.fazerAtendimento();
			}else{
				c.fazerCirurgia();
			} 
			break;			
		case 2:
			cout << "Digite o nome do medico: ";
			cin >> nome;
			cout <<"Digite a altura do medico: ";
			cin >>altura;
			cout <<"Digite o peso do medico: ";
			cin >> peso;
			cout <<"Digite o curso do medico: ";
			cin >> curso;
			cout <<"Voce deseja fazer 1 - Consulta ou 2 - Realizar cirurgia: ";
			cin >> es;
			o.setOftalmologista(nome,altura,peso,curso);
			if(es == 1){
				o.fazerAtendimento();
			}else{
				o.fazerCirurgia();
			} 	
			break;
								
		case 3:
			cout << "Digite o nome do medico: ";
			cin >> nome;
			cout <<"Digite a altura do medico: ";
			cin >>altura;
			cout <<"Digite o peso do medico: ";
			cin >> peso;
			cout <<"Digite o curso do medico: ";
			cin >> curso;
			cout <<"Voce deseja fazer 1 - Consulta ou 2 - Realizar cirurgia: ";
			cin >> es;
			ot.setOtorrino(nome,altura,peso,curso);
			if(es == 1){
				ot.fazerAtendimento();
			}else{
				ot.fazerCirurgia();
			} 
			break;						
		case 4:
			cout << "Digite o nome do medico: ";
			cin >> nome;
			cout <<"Digite a altura do medico: ";
			cin >>altura;
			cout <<"Digite o peso do medico: ";
			cin >> peso;
			cout <<"Digite o curso do medico: ";
			cin >> curso;
			cout <<"Voce deseja fazer 1 - Consulta ou 2 - Realizar cirurgia: ";
			cin >> es;
			g.setGinecologista(nome,altura,peso,curso);
			if(es == 1){
				g.fazerAtendimento();
			}else{
				g.fazerCirurgia();
			} 	
			break;		
		Default:
			cout <<"Error!";
			return 1;				
	}
	
	
	return 0;
}
