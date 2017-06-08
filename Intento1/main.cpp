#include <iostream>
#include<stdlib.h>
#include <vector>
#include <string.h>

#include "Clientes.h"
#include "Producto.h"
#include "Audifonos.h"
#include "Impresoras.h"
#include "Software.h"
#include "TV.h"
#include "Computadora.h"
//A1023
//I102
using namespace std;


/* de char a int

#include <stdlib.h>
char a[]={'1','2','3'};
int b=atoi(a);
cout<<b+2;

*/
//Declaracion de instancias
Clientes clientes[20];
Computadora computadoras[20];
Audifonos audifonos[20];
Software software[20];
TV Tv[20];
Impresoras impresoras[20];
/*vector <Clientes *> clientes;
vector <Computadora *> computadoras;*/



vector <Producto *> productos;

void printMenu();
void printCategorias();
void printComponentes();
void ordenAlfabetico();
void ordenPrecio();
void comprobar2Op(int &x);

int main()
{
    //Declaracion de instancias
    Clientes clientes[20];
    Computadora computadoras[20];
    Audifonos audifonos[20];
    Software software[20];
    TV Tv[20];
    Impresoras impresoras[20];
    /*vector <Clientes *> clientes;
    vector <Computadora *> computadoras;*/



    vector <Producto *> productos;
    /*for(int y=0; y<20; y++) //Queda pendiente mejorar el push back
    {
        productos.push_back(&computadoras[y]);
        productos.push_back(&audifonos[y]);
        productos.push_back(&software[y]);
        productos.push_back(&Tv[y]);
        productos.push_back(&impresoras[y]);
    }*/

    //Declaracion de variables

    int op,c=0,p=0,cat,lo;
    int edad,cantidad;
    float precio;
    string direccion,tipo,categoria;
    char nombre[20],sexo;
    do
    {
        printMenu(); cin>>op;
        switch(op)
            {
            case 1:
                //datos del cliente
                cout<<"\nDatos del cliente "<<c+1<<": \n\n";
                cout<<"Ingrese el nombre: "; cin>>nombre;
                cout<<"Ingrese la direccion: "; cin>>direccion;
                cout<<"Ingrese la edad: "; cin>>edad;
                //cout<<"Ingrese las preferencias: "; cin>>preferencia;
                cout<<"Ingrese el sexo: "; cin>>sexo;

                //Coloca los datos del cliente en un array(por ahora)
                clientes[c].setData(nombre,direccion,edad,sexo);
                c++; //actualiza numero de cliente(codigo)
                break;
            case 2:
                {

                printCategorias(); cin>>cat;
                switch(cat)
                {
                    case 1:
                        {

                            //char *au= new char [4];
                            char au[4]; //codigo
                            int *r=new int;

                            string cod,nomb;
                            au[0]='A';

                            string tier1, tier2,conexion;

                            cout<<"Ingrese el Nombre del Producto: ";
                            cin>>nombre;
                            nomb=nombre;

                            cout<<"Ingresar precio: ";
                            cin>>precio;

                            cout<<"Ingrese Cantidad: ";
                            cin>>cantidad;



                            cout<<"\n1. Auricular pasivo"<<endl
                                <<"2. Auricular activo"<<endl<<endl;
                                cin>>*r;
                            while(*r!=1 and *r!=2)//verifies if *r is correct
                                {
                                    cout<<"Opcion incorrecta\n";
                                    cin>>*r;
                                }
                            (*r==1)? au[1]='0':au[1]='1';
                            (*r==1)? tier1="Auricular pasivo":tier1="Auricular activo";
                            //au++;
                            cout<<"1. Auriculares abiertos"<<endl
                                <<"2. Auriculares cerrados"<<endl<<endl;
                                cin>>*r;
                            while(*r!=1 and *r!=2)
                                {
                                    cout<<"Opcion incorrecta\n";
                                    cin>>*r;
                                }
                                (*r==1)? au[2]='0':au[2]='1'; //if statement
                                (*r==1)? tier2="Auriculares abiertos":tier2="Auriculares cerrados";
                            //au++;

                            cout<<"1. Conexion wireless"<<endl
                                <<"2. Conexion alambrica"<<endl<<endl;
                                cin>>*r;
                            while(*r!=1 and *r!=2)
                                {
                                    cout<<"Opcion incorrecta\n";
                                    cin>>*r;
                                }
                                (*r==1)? au[3]='0':au[3]='1';
                                (*r==1)? conexion="Conexion wireless":conexion="Conexion alambrica";
                            //au--;
                            cod=au;
                            audifonos[p].setData(nomb,precio,"Audifono",cod,cantidad,conexion,tier1,tier2);

                            productos.push_back(&audifonos[p]);

                            audifonos[p].getData();
                            delete r;
                            break;
                        }
                    case 2:
                        {
                         //Computadoras
                            //char *au= new char [4];
                            char comp[2]; //codigo
                            int *r=new int;

                            string cod,nomb;
                            comp[0]='C';

                            string tipo;

                            cout<<"Ingrese el Nombre del Producto: ";
                            cin>>nombre;
                            nomb=nombre;

                            cout<<"Ingresar precio: ";
                            cin>>precio;

                            cout<<"Ingrese Cantidad: ";
                            cin>>cantidad;



                            cout<<"\n1. Componente"<<endl;
                            printComponentes();
                            cin>>*r;
                            while(*r!=1 and *r!=2 and *r!=3 and *r!=4 and *r!=5 and *r!=6 and *r!=7)//verifies if *r is correct
                                {
                                    cout<<"Opcion incorrecta\n";
                                    cin>>*r;
                                }

                            //comp--;
                            cod=comp;

                            computadoras[p].setData(nomb,precio,"Computadora",cod,cantidad,tipo);
                            productos.push_back(&computadoras[p]);
                           // computadoras[p].getData();
                            delete r;

                           break;
                        }
                    case 3:
                        {
                            char imp[2]; //codigo
                            int *r=new int;
                            //void setData(string miNombre, float miPrecio,
                            //string miCategoria, s
                            //tring miCodigo, int miCantidad,
                            //string miTipo, string miCaracteristica[]);

                            string cod,nomb;
                            imp[0]='I';
                            int i;
                            string tipo;

                            cout<<"Ingrese el Nombre del Producto: ";
                            cin>>nombre;
                            nomb=nombre;

                            cout<<"Ingresar precio: ";
                            cin>>precio;

                            cout<<"Ingrese Cantidad: ";
                            cin>>cantidad;



                            cout<<"\n1. Componente"<<endl;

                            cout<<"Ingrese Nmr Caracteristica(s)"<<endl;
                            cin>>i;
                            string caracteristicas[i];

                            cout<<"Ingrese Caracteristica(s):"<<endl;
                            for(int x=0;x<i;x++)
                                cin>>caracteristicas[x];

                            cin>>*r;
                            while(*r!=1 and *r!=2 and *r!=3 and *r!=4 and *r!=5 and *r!=6 and *r!=7)//verifies if *r is correct
                                {
                                    cout<<"Opcion incorrecta\n";
                                    cin>>*r;
                                }
                            //comp--;
                            cod=imp;

                            /*while(caracteristicas[i]!=NULL)
                                carac[i]=caracteristicas[i];*/


                            productos.push_back(&impresoras[p]);
                           // computadoras[p].getData();
                            delete r;

                           break;
                        }
                    case 4:
                        {
                            //software


                            break;
                        }
                    case 5:
                        {
                            //television


                            break;
                        }
                }





                //Datos del producto
                /*cout<<"\nDatos del producto "<<y+1<<": \n\n";
                cout<<"Ingrese el nombre: "; cin>>nombre;
                cout<<"Ingrese la categoria del producto: "; cin>>tipo;
                cout<<"Ingrese la cantidad: "; cin>>cantidad;
                cout<<"Ingrese el precio: "; cin>>precio;*/
                //Coloca los datos del producto en un array(por ahora)
                //productos.setData(nombre,tipo,cantidad,precio,y);

                p++;//Actualiza numero de producto(codigo)
                break;
                }
            case 3:
                //Muestra todos los datos de todos los productos
                //productos.getAllData(y);


                printCategorias();
                cin>>lo;
                while(lo!=1 && lo!=2 && lo!=3 && lo!=4 && lo!=5)
                    {
                        cout<<"Opcion Incorrecta\n";
                        cin>>lo;
                    }

                switch(lo)
                {

                     case 1:

                         {

                            cout<<"1. Por Precio: "<<endl;
                            cout<<"2. Por Orden Alfabetico: "<<endl;
                            cin>>lo;
                            comprobar2Op(lo);
                            switch(lo)
                            {
                                case 1: ordenPrecio(); break;

                                case 2: ordenAlfabetico(); break;

                            }
                            break;
                         }
                     case 2:
                        {

                           cout<<"1. Por Precio: "<<endl;
                           cout<<"2. Por Orden Alfabetico: "<<endl;
                           cin>>lo;
                           comprobar2Op(lo);
                           switch(lo)
                            {
                                case 1: ordenPrecio(); break;

                                case 2: ordenAlfabetico(); break;
                            }
                            break;
                        }
                     case 3:
                        {

                            cout<<"1. Por Precio: "<<endl;
                            cout<<"2. Por Orden Alfabetico: "<<endl;
                            cin>>lo;
                            comprobar2Op(lo);
                            switch(lo)
                            {
                                case 1: ordenPrecio(); break;

                                case 2: ordenAlfabetico(); break;
                            }
                            break;
                        }
                     case 4:
                        {

                            cout<<"1. Por Precio: "<<endl;
                            cout<<"2. Por Orden Alfabetico: "<<endl;
                            cin>>lo;
                            comprobar2Op(lo);
                            switch(lo)
                            {
                                case 1: ordenPrecio(); break;

                                case 2: ordenAlfabetico(); break;
                            }
                            break;
                        }
                     case 5:
                        {
                            cout<<"1. Por Precio: "<<endl;
                            cout<<"2. Por Orden Alfabetico: "<<endl;
                            cin>>lo;
                            comprobar2Op(lo);
                            switch(lo)
                            {
                                case 1: ordenPrecio(); break;

                                case 2: ordenAlfabetico(); break;
                            }
                            break;
                        }

                }



                break;
            case 4:

                //Busca un producto en especifico
                break;
            case 5:
                //Realiza la venta de un producto
                break;
            case 6:
                //Termina el programa
                break;
            default:
                cout<<"Ingrese opcion correcta\n";

            }
        cout<<endl;
        system("pause");
        system("cls");
    }
    while(op!=6);
    return 32;
}

void printMenu()
{
    cout<<"\t\t\t\t\t\t Menu de opciones"<<endl     //Ponerle nombre en vez menu de opciones
        <<" 1.Ingresar cliente"  <<endl
        <<" 2.Ingresar producto" <<endl
        <<" 3.Lista de productos"<<endl
        <<" 4.Buscar producto"   <<endl
        <<" 5.Vender producto"   <<endl
        <<" 6.Salir"             <<endl
        <<"Ingrese una opcion"   <<endl;
}

void printCategorias()
{
    /*system("cls");*/
    cout<<"\n\n 1. Audifonos "  <<endl
        <<" 2. Computadoras "   <<endl
        <<" 3. Impresoras "     <<endl
        <<" 4. Software "       <<endl
        <<" 5. Television "     <<endl
        <<"\nIngrese una opcion"<<endl;


}


void printComponentes(){

    cout<<"Componentes"<<endl;

}





void ordenPrecio(){

 cout<<"jiji";



}



void ordenAlfabetico(){


cout<<"jejej";


}



void comprobar2Op(int &x){

while(x!=1 && x!=2)
    {
    cout<<"Opcion Incorrecta\n";
    cin>>x;
    }

}

void comprobar3Op(int &x){

while(x!=1 && x!=2 && x!=3)
    {
    cout<<"Opcion Incorrecta\n";
    cin>>x;
    }
}

void comprobar4Op(int &x){

while(x!=1 && x!=2 && x!=3 && x!=4)
    {
    cout<<"Opcion Incorrecta\n";
    cin>>x;
    }

}

void comprobarOp5(int &x){

while(x!=1 && x!=2 && x!=3 && x!=4 && x!=5)
    {
    cout<<"Opcion Incorrecta\n";
    cin>>x;
    }

}

void comprobarOp8(int &x){

while(x!=1 && x!=2 && x!=3 && x!=4 && x!=5 && x!=6 && x!=7 && x!=8)
    {
    cout<<"Opcion Incorrecta\n";
    cin>>x;
    }

}




