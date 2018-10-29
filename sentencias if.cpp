/******************************************************************************

sentencias if

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int numero2 = 14; //variables
int numero3 = 15;

bool booleana = true;

int main()
{
    if (numero2<numero3)
    {
        cout << "ES MENOR" << endl;
    }
    
     else if (numero2 == numero3)
        {
            cout << "valen lo mismo" << endl;
        }
        
        else   //cuando la condicion no se cumple
        {
           cout << "no es menor" << endl;
        }
        
       

    return 0;
}
