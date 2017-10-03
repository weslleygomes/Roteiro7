#include "Trabalhador.h"

float Trabalhador::calcularPagamento(int Horas, int x){
	
	if(x==1){
		if(Horas<=40){
			return salario1*Horas;
		}else{
			Horas = Horas - 40;
			return (salario1*40)+(salario1*Horas*1.5);
		}
	}else{
		if(Horas<=40){
			return salario*Horas;	
		}else{
			return salario*40;	
		}
		
	}
}
