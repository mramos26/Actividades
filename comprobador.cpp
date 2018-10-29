/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
bool comprobador;
int num1, num2, num3, num4;

int main()
{
num1 = 12;
num2 = 20;
num3 = 4;
num4 = 13;


        comprobador = !(num4 > num1 && num3 < num2 );
        cout << comprobador << endl;
    return 0;
}
