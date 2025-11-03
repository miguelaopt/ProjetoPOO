#ifndef DIRECTORIAS_H
#define DIRECTORIAS_H

#include "Entradas.h"
#include <list>

class Directoria : public Entrada 
{
private:
    list<Entrada*> conteudo;  // relação 1:N com Entrada (ficheiros e subpastas)

public:
    Directoria(const string &nome, const string &caminho, SistemaFicheiros *sistema);
    virtual ~Directoria();

    void adicionarEntrada(Entrada *E);
    void removerEntrada(const string &nome);
    list<Entrada*> getConteudo();

    int getTamanho();
    bool isDirectoria();

    int contarElementosDiretos(); // nº de ficheiros + subpastas diretas
};

#endif

