#include "Circulo.h"
#include "Triangulo.h"
#include "Quadrado.h"

int main(){
	Circulo c;
	Triangulo t;
	Quadrado q;

	c.setNome ("Circulo");
	c.setRaio(2.0);

	t.setNome("Triangulo");
	t.setBase(2.0);
	t.setAltura(2.0);
	
	q.setNome("Quadrado");
	q.setBase(2.0);
	
	std::cout << c.getNome() << " " << c.calcularArea() << std::endl;
	std::cout << t.getNome() << " " << t.calcularArea() << std::endl;
	std::cout << q.getNome() << " " << q.calcularArea() << std::endl;
	return 0;
}
