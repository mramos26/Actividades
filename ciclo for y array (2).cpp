/******************************************************************************
 * 
ciclo for y array

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int
main ()
{
  char c[4];
  c[0] = 'h';
  c[1] = 'o';
  c[2] = 'l';
  c[3] = 'a';

  for (int i = 0; i < 4; i++)
    {
      cout << c[i];
    }

  return 0;
}
