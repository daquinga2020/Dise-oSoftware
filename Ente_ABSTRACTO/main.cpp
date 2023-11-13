#include <iostream>

using namespace std;

#include "Edificio.h"
#include "Conserje.h"
#include "Habitante.h"
#include "VecinoTranquilo.h"

int main()
{
    Conserje hab1("Freddy", "Conserje");
    VecinoTranquilo hab2("Eloy", "VecinoTranquilo");
    VecinoTranquilo hab3("Frank", "VecinoTranquilo");

    Habitante* habitantes[MAX_HABITANTES];
    int num_habitantes=0;
    habitantes[num_habitantes++] = &hab1;
    habitantes[num_habitantes++] = &hab2;
    habitantes[num_habitantes++] = &hab3;

    Edificio edificio1(habitantes, num_habitantes);
    edificio1.simularUnDia();

    return 0;
}
