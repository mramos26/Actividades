/******************************************************************************

leer n numeros y determinar cual es el mayor

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int numeros [100], n, mayor = 0;
    
    cout << "ingrese el numero de elementos   ";
    
    cin >> n;
    
    for ( int i = 0; i<n;i++)
    {
        cout <<i+1<< ". digiteme un numero: ";
        
        cin >> numeros [i];
        
        if (numeros [i] > mayor)
        {
            mayor = numeros [i];
            
        }
    }

    cout << "el numero mayor es: " << mayor << endl; 
    return 0;
    
    
}
