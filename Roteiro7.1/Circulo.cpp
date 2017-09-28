#include "Circulo.h"

Circulo::Circulo()
{
}
Circulo::~Circulo()
{
}
void Circulo::setRaio(float raio)
{	
	this->raio=raio;
}
float Circulo::calcularArea()
{
	return 3.14*raio*raio;
}
