#ifndef ENTEABSTRACTO_INCLUDED
#define ENTEABSTRACTO_INCLUDED

#include <iostream>
#include <string.h>
using namespace std;

class EnteAbstracto
{
    char nombre[20];
    char tipo[20];

public:
    EnteAbstracto(void){};
    EnteAbstracto(const char n[], const char t[]) {strcpy(nombre, n); strcpy(tipo, t); };

    virtual void actividadesPorHora(const int tiempo) const = 0;
    void imprime_accion(string accion)const
    {cout << tipo << " "<< nombre << " " << accion << endl; };
};

#endif // ENTEABSTRACTO_INCLUDED
