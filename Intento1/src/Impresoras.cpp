#include "Impresoras.h"

Impresoras::Impresoras()
{

}


void Impresoras::setData(string miNombre, float miPrecio, string miCategoria, string miCodigo, int miCantidad, string miTipo, string miCaracteristica[])
{
    nombre=miNombre;
    precio=miPrecio;
    categoria=miCategoria;
    codigo=miCodigo;
    cantidad=miCantidad;
    tipo=miTipo;
    for(int x=0;x<miCaracteristica.size();x++)
        caracteristicas[x]=miCaracteristica[x];

}
