/******************************************************************************
leer 5 numeros y determinar su promedio

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    
    int numero1 = 0;
    int suma = 0;
    float numeros_leidos = 0;
    
    while (numeros_leidos < 5)
    {
         cout << " ingresa un numero  "; 
         cin >> numero1;
         
        suma = suma + numero1;
        numeros_leidos ++ ;
    }   
    
        cout << "la suma es " << suma << endl;
        cout << "el promedio es " << suma / numeros_leidos ;
        
        
    return 0;
    
}
