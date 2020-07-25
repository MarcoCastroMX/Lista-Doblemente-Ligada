#include "Lista.h"
#include <iostream>

Lista::Lista(){
    primero = nullptr;
    contador = 0;
}
Nodo::Nodo(){
    sig = nullptr;
    ant = nullptr;
}
Nodo::Nodo(Tienda& B){
    this->B = B;
    sig = nullptr;
    ant = nullptr;
}
Nodo *Nodo::getSig(){
    return sig;
}
void Nodo::setSig(Nodo *direccion){
    sig = direccion;
}
Nodo *Nodo::getAnt(){
    return ant;
}
void Nodo::setAnt(Nodo *direccion){
    ant = direccion;
}
Tienda Nodo::getRopa(){
    return B;
}
void Nodo::setRopa(Tienda B){
    this->B = B;
}
int Lista::Menu(){
    int respuesta;
    cout<<"\t\tOASIS\n_______________________________________"<<endl;
    cout<<"[1] Agregar Nueva Prenda\n[2] Lista Vacia?\n[3] Mostrar Catalogo\n[4] Eliminar Ropa\n[5] Localizar Prenda\n[6] Ordenar Precios\n[0] Salir"<<endl;
    cout<<"Opcion: ";
    cin>>respuesta;
    return respuesta;
}

void Lista::AgregarNO(Tienda T){
    Nodo* nuevo= new Nodo(T);
    if(contador==0){
        primero=nuevo;
    }
    else{
        Nodo* aux;
        aux = primero;
        while(aux->getSig()!=nullptr){
            aux = aux->getSig();
        }
        aux->setSig(nuevo);
        nuevo->setAnt(aux);
    }
    contador++;
}

void Lista::AgregarSI(Tienda T){
    Nodo* nuevo= new Nodo(T);
    int precio;
    precio=nuevo->getRopa().getPrecio();
    if(contador==0){
        primero=nuevo;
    }
    else if(contador==1){
        if(precio>primero->getRopa().getPrecio()){
            primero->setSig(nuevo);
            nuevo->setAnt(primero);
        }
        else{
            primero->setAnt(nuevo);
            nuevo->setSig(primero);
            primero=nuevo;
        }
    }
    else if(primero->getRopa().getPrecio()>precio){
        primero->setAnt(nuevo);
        nuevo->setSig(primero);
        primero=nuevo;
    }
    else{
        Nodo* aux;
        aux = primero;
        while(aux!=nullptr){
            if(aux->getRopa().getPrecio()>precio){
                aux->getAnt()->setSig(nuevo);
                nuevo->setAnt(aux->getAnt());
                nuevo->setSig(aux);
                aux->setAnt(nuevo);
                contador++;
                return;
            }
            aux = aux->getSig();
        }
        aux = primero;
        while(aux->getSig()!=nullptr){
            aux = aux->getSig();
        }
        aux->setSig(nuevo);
        nuevo->setAnt(aux);
    }
    contador++;
}

int Lista::Vacia(){
    return contador;
}

void Lista::Mostrar(){
    Nodo* aux;
    aux = primero;
    while(aux!=nullptr){
        cout<<aux->getRopa().toString()<<endl;
        aux = aux->getSig();
    }
}

string Lista::Recupera(Nodo* B){
    return B->getRopa().toString();
}

Nodo* Lista::Buscar(string nombre){

    Nodo* aux;
    aux = primero;
    while(aux!=nullptr){
        if(nombre == aux->getRopa().getPrenda()){
            return aux;
        }
        aux = aux->getSig();
    }
    return nullptr;
}

void Lista::Eliminar(Nodo *elim){
    Nodo* ant = primero;
    if(ant==elim){
        if(contador==1){
            primero=nullptr;
        }
        else{
            primero = ant->getSig();
            primero->setAnt(nullptr);
        }
        delete(elim);
        contador--;
    }
    else if(elim->getSig()==nullptr){
        while(ant->getSig() != elim){
            ant = ant->getSig();
        }
        ant->setSig(nullptr);
        delete(elim);
        contador--;
    }
    else{
        while(ant->getSig() != elim){
            ant = ant->getSig();
        }
        ant->setSig(elim->getSig());
        elim->getSig()->setAnt(ant);
        delete(elim);
        contador--;
    }
}

int Lista::Ordenar(){


}

void Lista::setContador(int numero){
    contador=numero;
}
int Lista::getContador(){
    return contador;
}

