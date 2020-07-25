#include <iostream>
#include "Lista.h"
#include "Ropa.h"
#include "Tienda.h"
#include <stdlib.h>

using namespace std;

int main()
{
    Lista l;
    int Ciclo=1;
    string Prenda;
    do{
        system("cls");
        Ciclo=l.Menu();
        switch(Ciclo){
            case 1:{
                system("cls");
                cout<<"\t\tINGRESAR PRENDA\n_______________________________________"<<endl;
                string nombre,marca,talla,respuesta;
                int precio;
                cout<<"Nombre de Prenda: "<<endl;
                cin>>nombre;
                cout<<"Marca de Prenda: "<<endl;
                cin>>marca;
                cout<<"Talla de Prenda: "<<endl;
                cin>>talla;
                cout<<"Ingrese el Precio: "<<endl;
                cin>>precio;
                Tienda T(nombre,marca,talla,precio);
                cout<<"Desea Agregarlo Ordenado\n[1] Si\n[2] No"<<endl;
                cin>>respuesta;
                if(respuesta=="1")
                    l.AgregarSI(T);
                if(respuesta=="2")
                    l.AgregarNO(T);
                break;
            }
            case 2:{
                system("cls");
                cout<<"\t\tVACIA?\n_______________________________________"<<endl;
                if(l.Vacia()==0){
                    cout<<"LISTA VACIA"<<endl;
                    system("pause");
                    break;
                }
                cout<<"LISTA NO VACIA"<<endl;
                system("pause");
            }
            case 3:{
                system("cls");
                if(l.Vacia()==0){
                    cout<<"LISTA VACIA"<<endl;
                    system("pause");
                    break;
                }
                cout<<"\t\tCATALOGO\n_______________________________________"<<endl;
                l.Mostrar();
                system("pause");
                break;
            }
            case 4:{
                system("cls");
                cout<<"\t\tELIMINAR\n_______________________________________"<<endl;
                string Prenda;
                if(l.Vacia()==0){
                    cout<<"LISTA VACIA"<<endl;
                    system("pause");
                    break;
                }
                cout<<"Ingrese Nombre de Prenda a Eliminar: "<<endl;
                cin>>Prenda;
                l.Eliminar(l.Buscar(Prenda));
                cout<<"Prenda Eliminada Satisfactoriamente "<<endl;
                system("pause");
                break;
            }
            case 5:{
                system("cls");
                cout<<"\t\tBUSQUEDA\n_______________________________________"<<endl;
                if(l.Vacia()==0){
                    cout<<"LISTA VACIA"<<endl;
                    system("pause");
                    break;
                }
                cout<<"Ingrese Nombre de Prenda a Buscar: "<<endl;
                cin>>Prenda;
                cout<<"Ropa: "<<l.Recupera(l.Buscar(Prenda))<<endl;;
                system("pause");
                break;
            }
            case 6:{
                system("cls");
                cout<<"\t\tORDENAR\n_______________________________________"<<endl;
                if(l.Vacia()==0){
                    cout<<"LISTA VACIA"<<endl;
                    system("pause");
                    break;
                }
                system("pause");
                break;
            }
        }
    }while(Ciclo!=0);

    return 0;
}
