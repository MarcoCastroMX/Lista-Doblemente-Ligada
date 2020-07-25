#ifndef ROPA_H
#define ROPA_H
#include <string>

using namespace std;

class Ropa{
private:
    string prenda, talla, marca;
public:
    Ropa();
    Ropa(string,string,string);
    string getPrenda();
    string getTalla();
    string getMarca();
    void setPrenda(string);
    void setTalla(string);
    void setMarca(string);
};

#endif // ROPA_H
