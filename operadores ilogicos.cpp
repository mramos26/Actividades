/******************************************************************************

operadores ilogicos
*******************************************************************************/
#include <stdio.h>

#include <iostream>
using namespace std;

    bool comprobador;
    
   int numero1, numero2, numero3, numero4;
    
int main()
{
    numero1 =12;
    numero2 =20;
    numero3 =4;
    numero4 =13;  

    //comprobador = (numero4 = numero1 && numero3 < numero2); // && = i
   // comprobador = (numero4 < numero1 && numero3 < numero2);
   // comprobador = (numero4 = numero1 || numero3 < numero2); // || = or
    comprobador = !(numero4 < numero1 ); // != invierte
    cout << comprobador << endl;
    
    return 0;
}
