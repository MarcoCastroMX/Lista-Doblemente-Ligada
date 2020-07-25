#include "Tienda.h"
#include <sstream>

int Tienda::getPrecio(){
    return precio;
}

void Tienda::setPrecio(int _precio){
    precio=_precio;
}

Tienda::Tienda(){

}

Tienda::Tienda(string _nombre,string _marca,string _talla, int _precio):Ropa(_nombre,_marca,_talla){
    precio=_precio;
}

string Tienda::toString(){
    stringstream ss;
    ss<<precio;
    string s = "";
    s = getPrenda()+" "+getMarca()+" "+getMarca()+" "+ss.str();
    return s;
}
