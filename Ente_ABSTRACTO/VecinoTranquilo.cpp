#include "VecinoTranquilo.h"


VecinoTranquilo::VecinoTranquilo(const char n[], const char t[]): Vecino(n, t)
{
    hora_desayuno = 7 + rand() % 4;
};


void VecinoTranquilo::actividadesPorHora(const int tiempo) const
{
    if( (tiempo >= 7) && (tiempo <= 23) )
    {
        if(tiempo == hora_desayuno)
            imprime_accion("esta desayunando");
    }
    Vecino::actividadesPorHora(tiempo);
}
