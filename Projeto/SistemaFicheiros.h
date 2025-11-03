#ifndef SISTEMAFICHEIROS_H
#define SISTEMAFICHEIROS_H

#include <iostream>
using namespace std;
#include <list>

class SistemaFicheiros
{
	private:
		list<Entrada*> Entradas; //lista por ser 1:N (N do lado das Entradas)
		// Métodos auxiliares privados (para procuras, contagens, etc)
        int contarFicheirosAux(Entrada *E);
        int contarDirectoriasAux(Entrada *E);
        int memoriaAux(Entrada *E);
	public:
		SistemaFicheiros();
		virtual ~SistemaFicheiros();
		bool Load(const string &path);
		int ContarFicheiros();
		int ContarDirectorias();
		int Memoria(); 
        string DirectoriaMaisElementos ();
        string DirectoriaMenosElementos ();
        string FicheiroMaior();
        string DirectoriaMaisEspaco();
        string Search(const string &s, int Tipo);
        bool RemoverAll(const string &s, const string &tipo);
        void Escrever_XML(const string &s);
        bool Ler_XML(const string &s);
        bool MoveFicheiro(const string &Fich, const string &DirNova);
        bool MoverDirectoria(const string &DirOld, const string &DirNew);
        string DataFicheiro(const string &ficheiro);
        void Tree(const string *fich = "tree.txt");
        void PesquisarAllDirectorias(list<string> &lres, const string &dir);
        void PesquisarAllFicheiros(list<string> &lres, const string &file);
        void RenomearFicheiros(const string &fich_old, const string &fich_new);
        bool FicheiroDuplicados();
        bool CopyBatch(const string &padrao, const string &DirOrigem, const string &DirDestino);
};

#endif
