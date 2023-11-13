#include <iostream>

using namespace std;

int main()
{
    //Primera practica 0
    /* Ejercicio 1
    const int LIMITE = 20;
    unsigned long factorial, resultado;

    for (int i = 0; i <= LIMITE; i++)
    {
        factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }
        resultado = factorial << 2;//multiplica por 4, ahi se esta desplazando dos bits

    }*/

    //Ejercicio 2
    unsigned short output=0x0000;
    unsigned short input1=0x5555;
    unsigned short input2=0xAAAA;
    unsigned short aux=0;
    unsigned short aux2=0;
    unsigned short mask1= (1<<8) | (1<<9) | (1<<10) | (1<<11);
    unsigned short mask2= (1<<4) | (1<<5) | (1<<6) | (1<<7);

    aux2= input2 & mask2;
    aux2 = aux2 << 4;

    aux= input1 & ~mask1;
    output= aux | aux2;



    return 0;

}

