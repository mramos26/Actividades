/******************************************************************************

ciclo for y array

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    char c[5];
    c[0] = 'h' ;
    c[1] = 'o' ;
    c[2] = 'l' ;
    c[3] = 'a' ;
    c[4] = '!' ;
    for (int i=0; i<5; i++)
    {
        cout << c[i];
        
    }
    
    cout << endl;

    return 0;
}
