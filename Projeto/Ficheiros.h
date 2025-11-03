#ifndef FICHEIROS_H
#define FICHEIROS_H

#include "Entradas.h"

class Ficheiro : public Entrada 
{
private:
    int TAMANHO;// em bytes
    string DATA;// formato DD/MM/AAAA

public:
    Ficheiro(const string &nome, const string &caminho, int tamanho, const string &data, SistemaFicheiros* sistema);
    virtual ~Ficheiro();

    int getTamanho();
    string getData();
    bool isDirectoria();
};

#endif

//mais uma?

