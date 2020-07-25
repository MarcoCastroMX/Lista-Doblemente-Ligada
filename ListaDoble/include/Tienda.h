#ifndef TIENDA_H
#define TIENDA_H
#include "Ropa.h"

class Tienda: public Ropa{
private:
    int precio;
public:
    Tienda();
    Tienda(string,string,string,int);
    void setPrecio(int);
    int getPrecio();
    string toString();

};

#endif // TIENDA_H
