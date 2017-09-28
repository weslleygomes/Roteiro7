#include "FigurasGeometricas.h"

FigurasGeometricas::FigurasGeometricas()
{
}
FigurasGeometricas::~FigurasGeometricas()
{
}
void FigurasGeometricas::setNome(std::string nome)
{
	this->nome=nome;
}
std::string FigurasGeometricas::getNome()
{
	return nome;
}
