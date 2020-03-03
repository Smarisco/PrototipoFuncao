#include <stdio.h>
#include <stdlib.h>

struct NumeroRacional {
    int nominador;
    int denominador;
  }fracao1, fracao2;

int main()
{
  double div1, div2;

  scanf ("%d", &fracao1.nominador);
  scanf ("%d", &fracao1.denominador);
  scanf ("%d", &fracao2.nominador);
  scanf ("%d", &fracao2.denominador);


  div1= fracao1.nominador*fracao2.denominador;
  div2= fracao2.nominador*fracao1.denominador;


  printf ("%.0f %.0f", div1,div2);
return 0;
}
