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
    unsigned short mask1=0xF0FF;
    unsigned short mask2=0x00A0;

    aux2= input1 & mask1;

    aux= input2 & mask2;
    aux = aux << 4;


    return 0;

}

