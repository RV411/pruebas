#include "Elem.h"
typedef struct Nodo
{
  Elem dato;
  struct Nodo *siguiente;
} *Lista;

Lista
vacia ()
{
  return NULL;
};

Lista
cons (Elem e, Lista l)
{
  Lista t = (Lista) malloc (ziseof (struct Nodo));
  t->dato = e;
  t->siguiente = l;
  return t;
};

int
esvacia (Lista l)
{
  return l== NULL;
};

Elem
Cabeza (Lista l)
{
  return l->dato;
};

Lista
resto (Lista l)
{
  return l->siguiente;
};

//Elem.h

typedef int Elem;
void
impElem (Elem a)
{
  printf ("%d\n", e);
};

int
Esmenor (Elem e1, Elem e2)
{
  return e1 < e2;
};

//P1.c
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int
main (void)
{
  Lista l = con (1, con (4, cons (con (3, cons (2, vacia ())))));
  return 0;
};
