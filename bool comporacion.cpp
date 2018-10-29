/******************************************************************************

bool comporacion
*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
bool comprobador;

    int numero1 = 10;
    int numero2 = 12;

int main()
{
    //comprobador = (numero1 == numero2); //igual que 
    //comprobador = (numero1 != numero2); //que son distintas
    //comprobador = (numero1 < numero2); //menor que
    //comprobador = (numero1 > numero2); //mayor que
    //comprobador = (numero1 <= numero2); //menor o igual
    comprobador = (numero1 >= numero2); // mayor o igual
    
    
    cout<< comprobador << endl;

    return 0;
}
