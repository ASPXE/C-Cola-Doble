#include <stdio.h>
#include "Cola.h"
#include "ColaDoble.h"

ColaDoble::ColaDoble() 
{
    frenteD = fondoD = TAMCOLA;
}

int ColaDoble::Cardinalidad(bool doble)
{
    if(!doble)
        return Cola::Cardinalidad();
    if(EsVacia(doble))
        return 0;
    return (frenteD - fondoD) + 1;
}

void ColaDoble::Despliega(bool doble)
{
    if(!doble)
    {
        Cola::Despliega();
        return;
    }
    if(EsVacia(doble))
        return;
    for(int i = frenteD; i >= fondoD; i--)
        printf("%d\t",Arr[i]);
    printf("\n");
}

bool ColaDoble::EsElemento(int dato, bool doble)
{
    if(!doble)
        return Cola::EsElemento(dato);
    if(EsVacia(doble))
        return false;
    for(int i = frenteD; i >= fondoD; i--)
        if(Arr[i] == dato)
            return true;
    return false;
}

bool ColaDoble::EsLlena()
{
    if(frente != -1 && frenteD != TAMCOLA)
        if(fondo == fondoD - 1)
            return true; 
    if(frenteD == TAMCOLA)
        return Cola::EsLlena();
    else
        if(fondoD == 0)
            return true;
    return false;
}

bool ColaDoble::EsVacia(bool doble)
{
    if(!doble)
        return Cola::EsVacia();
    if(frenteD == TAMCOLA)
        return true;
    return false;
}


bool ColaDoble::Inserta(int dato, bool doble)
{
    if(EsLlena())
        return false;
    if(!doble)
        return Cola::Inserta(dato);
    if(EsVacia(doble))
        frenteD= TAMCOLA - 1;
    fondoD--;
    Arr[fondoD] = dato;
    return true;
}

bool ColaDoble::Elimina(int *dato, bool doble)
{
    if(EsVacia(doble))
        return false;
    if(!doble)
        return Cola::Elimina(dato);
    *dato = Arr[frenteD];
    if(frenteD == TAMCOLA)
        frenteD = TAMCOLA - 1;
    fondoD--;
    return true;
}


/*   if(EsVacia())
        return false;
    *num = Arr[frente];
    if(frente == fondo)
        frente = fondo = -1;
    else
        frente++;
    return true;
}*/