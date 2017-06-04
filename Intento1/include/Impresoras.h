#ifndef IMPRESORAS_H
#define IMPRESORAS_H
#include "Producto.h"

class Impresoras : public Producto
{
    private:
        string tipo,caracteristicas[3];
    public:
        Impresoras();
        void setData(string miNombre, float miPrecio, string miCategoria, string miCodigo, int miCantidad, string miTipo, string miCaracteristica[]);

};

#endif // IMPRESORAS_H
