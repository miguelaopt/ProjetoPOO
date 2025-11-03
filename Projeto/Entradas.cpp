#include "SistemaFicheiros.h"
#include "Entradas.h"

Entrada::Entrada(const string &nome, const string &caminho, SistemaFicheiros *sistema)
{
	NOME = nome;
	CAMINHO = caminho;
	Sistema = sistema;
}

Entrada::~Entrada()
{
	
}

string Entrada::getNome()
{
	return NOME;
}

string Entrada::getCaminho()
{
	return CAMINHO;
}

SistemaFicheiros Entrada::getSistema()
{
	return *Sistema;
}

void Entrada::setNome(const string &novoNome)
{
	NOME = novoNome;
}

void Entrada::setCaminho(const string &novoCaminho)
{
	CAMINHO = novoCaminho;
}
