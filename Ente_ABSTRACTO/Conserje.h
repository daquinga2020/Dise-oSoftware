#ifndef CONSERJE_H_INCLUDED
#define CONSERJE_H_INCLUDED

#include "Habitante.h"

class Conserje: public Habitante
{
public:
    Conserje(const char n[], const char t[]): Habitante(n, t) {};
    void actividadesPorHora(const int tiempo) const;

};

#endif // CONSERJE_H_INCLUDED
