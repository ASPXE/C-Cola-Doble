#ifndef COLADOBLE_H
#define COLADOBLE_H

#include "Cola.h"

class ColaDoble : public Cola
{
private:
    int frenteD, fondoD;        
public:
    ColaDoble();                         // Ya
    int  Cardinalidad(bool doble);       // Ya
    void Despliega(bool doble);          // Ya
    bool Elimina(int *dato, bool doble);
    bool EsElemento(int dato, bool doble); // Ya
    bool EsLlena();                      // Ya
    bool EsVacia(bool doble);            // Ya
    bool Inserta(int dato, bool doble);  // Ya
};

#endif /* COLADOBLE_H */