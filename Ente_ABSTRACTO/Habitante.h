#ifndef HABITANTE_H_INCLUDED
#define HABITANTE_H_INCLUDED

#include "EnteAbstracto.h"

class Habitante: public EnteAbstracto
{

public:
    Habitante(const char n[], const char t[]): EnteAbstracto(n, t){};
    void actividadesPorHora(const int tiempo) const{};

};


#endif // HABITANTE_H_INCLUDED
