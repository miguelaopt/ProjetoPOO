#ifndef ENTRADAS_H
#define ENTRADAS_H

#include <string>
#include <iostream>
using namespace std;
#include "SistemaFicheiros.h"

class SistemaFicheiros; // Evitar dependência circular

class Entrada
{
	private:
	    string NOME;
        string CAMINHO;
        SistemaFicheiros *Sistema; //ponteiro por ser 1:N (1 do lado do Sistema)
	public:
		Entrada(const string &nome, const string &caminho, SistemaFicheiros *sistema);
		virtual ~Entrada();
		string getNome();
        string getCaminho();
        SistemaFicheiros *getSistema();
        void setNome(const string &novoNome);
        void setCaminho(const string &novoCaminho);
};


#endif
