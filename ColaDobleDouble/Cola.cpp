#include <stdio.h>

#include "Cola.h"

Cola::Cola()
{
    frente = fondo = -1;
}

int Cola::Cardinalidad()
{
    if(EsVacia())
        return 0;
    return (fondo - frente) + 1;
}

void Cola::Despliega()
{
    for(int i = frente; i <= fondo; i++)
        printf("%d\t",Arr[i]);
    printf("\n");
}

bool Cola::Elimina(int *num)
{
    if(EsVacia())
        return false;
    *num = Arr[frente];
    if(frente == fondo)
        frente = fondo = -1;
    else
        frente++;
    return true;
}

bool Cola::EsElemento(int  num)
{
    for(int i = frente; i <= fondo; i++)
        if(Arr[i] == num)
            return true;
    return false;
}

bool Cola::EsLlena()
{
    if(fondo == TAMCOLA -1)
        return true;
    else
        return false;
}

bool Cola::EsVacia()
{
    if(frente == -1)
        return true;
    else
        return false;
}

bool Cola::Inserta(int num)
{
    if(EsLlena())
        return false;
    if(EsVacia())
        frente = 0;
    fondo++;
    Arr[fondo] = num;
    //printf("Cola Frente: %d Fondo: %d\n",frente,fondo);
    return true;
}