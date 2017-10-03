#include "Trabalhador.h"
 using namespace std;
 #include <iostream>
 
 float Trabalhador::calcularPagamento(int Horas, int x){
 	
 	if(x==1){
 		if(Horas<=40){
 			return salario1*Horas;
 		}else{
 			return salario1*40;
 		}
 	}else{
 		if(Horas<=40){
 			return salario*Horas;	
 		}else{
 			Horas = Horas - 40;
 			return (salario*40)+(salario*Horas*1.5);
 		}
 	}
 }
