#include "Quadrado.h"

Quadrado::Quadrado()
{
}
Quadrado::~Quadrado()
{
}
void Quadrado::setBase(float base)
{	
	this->base=base;
}
float Quadrado::calcularArea()
{
	return base*base;
}
