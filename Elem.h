#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	Elem dato;
	struct Nodo*siguiente;
}*Lista;

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


