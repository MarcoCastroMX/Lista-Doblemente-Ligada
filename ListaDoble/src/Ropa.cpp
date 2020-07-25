#include "Ropa.h"

Ropa::Ropa()
{
    //ctor
}

Ropa::Ropa(string _nombre,string _marca,string _talla){
    prenda=_nombre;
    talla=_talla;
    marca=_marca;
}
string Ropa::getMarca(){
    return marca;
}

string Ropa::getPrenda(){
    return prenda;
}

string Ropa::getTalla(){
    return talla;
}

void Ropa::setPrenda(string nom){
    prenda=nom;
}

void Ropa::setTalla(string tal){
    talla=tal;
}

void Ropa::setMarca(string mar){
    marca=mar;
}

