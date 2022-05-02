#include <stdio.h>

#include "Cola.h"

#include "ColaDoble.h"

int main(int argc, char** argv) 
{
    /*Pila pi;
    if(pi.EsVacia())
        printf("Pila vacÃ­a\n");
    pi.Inserta(20);
    pi.Inserta(18);
    pi.Inserta(34);
    pi.Inserta(-6);
    pi.Despliega();
    int cuantos = pi.Cardinalidad();
    printf("Hay %d elementos en la pila\n",cuantos);
    int num = 0;
    if(pi.Elimina(&num))
        printf("EliminÃ³ el entero %d\n",num);
    pi.Inserta(32);
    pi.Inserta(4);
    pi.Inserta(123);
    pi.Inserta(11);
    pi.Inserta(19);
    cuantos = pi.Cardinalidad();
    printf("Hay %d elementos en la pila\n",cuantos);
    if(!pi.EsElemento(5))
        printf("El 5 no estÃ¡ en la pila\n");
    if(pi.EsElemento(11))
        printf("El 11 sÃ­ estÃ¡ en la pila\n");
    pi.Inserta(148);
    pi.Inserta(13);
    if(pi.Inserta(37))
        printf("InsertÃ³ el 37 como onceno elemento\n");
    pi.Despliega();
    if(pi.EsVaciaDoble())
        printf("Pila Doble vacÃ­a\n");
    pi.InsertaDoble(76);
    pi.InsertaDoble(25);
    pi.InsertaDoble(42);
    pi.InsertaDoble(89);
    cuantos = pi.CardinalidadDoble();
    printf("La pila doble tiene %d elementos apilados\n",cuantos);
    pi.DespliegaDoble();
    pi.EliminaDoble(&num);
    printf("EliminÃ³ el %d de la pila doble\n",num);
    pi.Inserta(86);
    pi.Inserta(87);
    pi.InsertaDoble(56);
    pi.InsertaDoble(57);
    pi.InsertaDoble(58);
    pi.InsertaDoble(59);
    pi.Despliega();
    pi.DespliegaDoble();
    if(pi.EsLlena())
        printf("El arreglo estÃ¡ lleno\n");
    if(!pi.Inserta(25))
        printf("No pudo insertar en la pila\n");
    if(!pi.InsertaDoble(43))
        printf("No pudo insertar en la pila doble\n");
    pi.Despliega();
    pi.DespliegaDoble();
    pi.Elimina(&num);
    pi.InsertaDoble(9);
    pi.Despliega();
    pi.DespliegaDoble();
    pi.EliminaDoble(&num);
    pi.Inserta(7);
    pi.Despliega();
    pi.DespliegaDoble();*/
    //Cola c;
    /*ColaCircular c;
    if(c.EsVacia())
        printf("Cola vacia\n");
    int cuantos = c.Cardinalidad();
    printf("La cardinalidad es cero %d\n",cuantos);
     c.Inserta(18);
     c.Inserta(42);
     c.Inserta(26);
     c.Inserta(7);
     c.Inserta(28);
     c.Despliega();
     cuantos = c.Cardinalidad();
     printf("La cardinalidad es cinco %d\n",cuantos);
     int num;
     if(c.Elimina(&num))
        printf("Elimino el 18 %d\n",num);
     c.Despliega();
     c.Inserta(4);
     c.Inserta(69);
     c.Inserta(23);
     c.Inserta(26);
     c.Inserta(33);
     c.Despliega();
     c.Inserta(39);
     c.Despliega();
     if(!c.Inserta(27))
        printf("No pude insertar\n");
    if(c.EsLlena())
        printf("Cola llena\n");
    c.Elimina(&num);
    c.Elimina(&num);
    c.Elimina(&num);
    c.Despliega();
    c.Inserta(3);
    c.Inserta(25);
    c.Inserta(32);
    c.Despliega();
    if(c.Elimina(&num))
        printf("Elimino el 28 %d\n",num);
    c.Despliega();*/
    ColaDoble d;
    d.Inserta(3,false);
    d.Inserta(9,false);
    d.Inserta(25,false);
    d.Inserta(6,false);
    d.Despliega(false);
    int cuantos = d.Cardinalidad(false);
    printf("La cardinalidad de la cola simple es %d\n",cuantos);
    if(d.EsVacia(true))
        printf("La cola doble está vacía\n");
    d.Inserta(7,true);
    d.Inserta(5,true);
    d.Inserta(14,true);
    d.Despliega(true);
    cuantos = d.Cardinalidad(true);
    printf("La cardinalidad de la cola doble es %d\n",cuantos);
    d.Inserta(19,false);
    d.Inserta(4,false);
    d.Inserta(32,true);
    d.Despliega(false);
    d.Despliega(true);
    if(d.EsLlena())
       printf("Las colas simple y doble están llenas\n"); 
    cuantos = d.Cardinalidad(false);
    printf("La cardinalidad de la cola simple es %d\n",cuantos);
    cuantos = d.Cardinalidad(true);
    printf("La cardinalidad de la cola doble es %d\n",cuantos);
    int dato;
    d.Elimina(&dato,true);
    d.Elimina(&dato,true);
    if(d.EsLlena())
        printf("Las colas simple y doble están llenas\n"); 
    cuantos = d.Cardinalidad(false);
    printf("La cardinalidad de la cola simple es %d\n",cuantos);
    cuantos = d.Cardinalidad(true);
    printf("La cardinalidad de la cola doble es %d\n",cuantos);
    d.Elimina(&dato,true);
    d.Elimina(&dato,true);
    if(!d.EsLlena())
        printf("Las colas simple y doble no están llenas\n"); 
    cuantos = d.Cardinalidad(false);
    printf("La cardinalidad de la cola simple es %d\n",cuantos);
    cuantos = d.Cardinalidad(true);
    printf("La cardinalidad de la cola doble es %d\n",cuantos);
    if(d.EsVacia(true));
        printf("La cola doble está vacía\n");
    d.Inserta(26,false);
    d.Inserta(27,false);
    d.Inserta(28,false);
    d.Inserta(29,false);
    d.Despliega(false);
    d.Despliega(true);
    if(d.EsLlena())
       printf("Las colas simple y doble están llenas\n"); 
    cuantos = d.Cardinalidad(false);
    printf("La cardinalidad de la cola simple es %d\n",cuantos);
    cuantos = d.Cardinalidad(true);
    return 0;
}