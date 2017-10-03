#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");	
	
	int r1x,r1y,r1z,r2x,r2y,r2z,i,j,k,pontox,pontoy,pontoz,pontox1,pontoy1,pontoz1,pontox2,pontoy2,pontoz2,a,b,c,d;
	
	printf("Indique o v1: ");
	scanf("%d %d %d",&r1x,&r1y,&r1z);
	
	printf("Indique o v2: ");
	scanf("%d %d %d",&r2x,&r2y,&r2z);
	
	printf("Indique o Ponto 1: ");
	scanf("%d %d %d",&pontox1,&pontoy1,&pontoz1);
	
	printf("Indique o Ponto 2: ");
	scanf("%d %d %d",&pontox2,&pontoy2,&pontoz2);
	
	pontox = pontox2 - pontox1;
	pontoy = pontoy2 - pontoy1;
	pontoz = pontoz2 - pontoz1;
	
	i = ((r1y * r2z) - (r1z * r2y));
	j = ((r1z * r2x) - (r1x * r2z));
	k = ((r1x * r2y) - (r1y * r2x));
	
	printf("\n\nCalculando: v1 = (%d %d %d) x  v2 = (%d %d %d)\n",r1x,r1y,r1z,r2x,r2y,r2z);
	
	printf("Resultado = %di %dj %dk\n",i,j,k);
	
	printf("Checando o produto misto.\n");
	
	if(i==0 && j==0 && k==0){
		if(pontox2 == pontox1){
			if(pontoy2 == pontoy1){
				if(pontoz2 == pontoz1){
					printf("As retas são coincidentes.\n");
				}else{
					printf("As retas são paralelas.\n");
				}
			}else{
			printf("As retas são paralelas.\n");
			}
		}else{
			printf("As retas são paralelas.\n");
		}
	}else{
		a = ((pontox * r1y * r2z) - (pontox * r1z * r2y));
		b = ((pontoy * r1z * r2x) - (pontoy * r1x * r2z));
		c = ((pontoz * r1x * r2y) - (pontoz * r1y * r2x));
		
		d= a + b + c;
		
		printf("\n\nCalculando: v1 = (%d %d %d) x v2 = (%d %d %d) . Ponto = (%d %d %d)\n",r1x,r1y,r1z,r2x,r2y,r2z,pontox,pontoy,pontoz);
		printf("Resultado = %d\n",d);
		
		if(d == 0){
			printf("As retas são concorrentes.\n");
		}else{
			printf("As retas são reversas.\n");
		}
		
	}
	
	system("PAUSE");	
	return 0;
}
