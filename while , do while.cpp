/******************************************************************************

while , do while

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
   /* int i = 0;
    while (i <= 15)
    {
    cout << i << endl;
    i++;
    }   */

  int i = 10;
    do       //primero ejecuta y lugo comprueba
    {
    cout << i << endl;
    i++;
    }while (i <= 15);

    return 0;
}
