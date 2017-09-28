#include "Triangulo.h"

Triangulo::Triangulo()
{
}
Triangulo::~Triangulo()
{
}
void Triangulo::setBase(float base)
{	
	this->base=base;
}
void Triangulo::setAltura(float altura)
{	
	this->altura=altura;
}
float Triangulo::calcularArea()
{
	return base*altura/2;
}
