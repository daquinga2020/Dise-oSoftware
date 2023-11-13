#ifndef VECINOTRANQUILO_H_INCLUDED
#define VECINOTRANQUILO_H_INCLUDED

#include "Vecino.h"

class VecinoTranquilo: public Vecino
{
public:
    VecinoTranquilo(const char n[], const char t[]);
    void actividadesPorHora(const int tiempo) const;

    protected:
        int hora_desayuno;
};

#endif // VECINOTRANQUILO_H_INCLUDED
