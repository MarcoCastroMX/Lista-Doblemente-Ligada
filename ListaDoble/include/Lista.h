#ifndef LISTA_H
#define LISTA_H
#include "Tienda.h"

class Nodo{
private:
    Tienda B;
    Nodo* sig;
    Nodo* ant;
public:
    Nodo();
    Nodo(Tienda& B);
    Tienda getRopa();
    void setRopa(Tienda);
    Nodo *getSig();
    void setSig(Nodo *valor);
    Nodo *getAnt();
    void setAnt(Nodo *valor);
};

class Lista{
private:
    Nodo* primero;
    int contador;
public:
    Lista();
    int Menu();
    int Vacia();
    void AgregarNO(Tienda);
    void AgregarSI(Tienda);
    void Mostrar();
    void Eliminar(Nodo*);
    Nodo* Buscar(string);
    int Ordenar();
    int getContador();
    void setContador(int);
    string Recupera(Nodo* B);
};

#endif // LISTA_H
