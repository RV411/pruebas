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
