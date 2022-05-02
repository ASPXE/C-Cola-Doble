#ifndef COLA_H
#define COLA_H

#define TAMCOLA 10

class Cola
{
protected:
    int Arr[TAMCOLA];
    int frente, fondo;
public:
    Cola();
    int  Cardinalidad();
    void Despliega();
    bool Elimina(int*);
    bool EsElemento(int dato);
    bool EsLlena();
    bool EsVacia();
    bool Inserta(int);
};

#endif /* COLA_H */