#include "lista3.h"
#include "lista3_test.h"
#include <iostream>
using namespace std;

void lista3_test1(void)
{
    tLista* lista = new tLista;

    inicializar(lista);
    mostrar(lista);

    tRegistro* registro = new tRegistro;
    for (int i = 0; i < 10; i++)
    {
        registro->codigo = 123000 + i;
        registro->nombre[0] = 'A' + i;
        registro->nombre[1] = 0;
        registro->valor = 456.0 + i;
        if (insertar(lista, registro) == false)
            cout << "elemento no insertado!" << endl;
    }

    mostrar(lista);

    cout << endl << "Posición: " << buscar(lista, 123006) << endl;

    cout << "eliminación" << endl;
    eliminar(lista, 123004);
    mostrar(lista);

    // liberar memoria
    destruir(lista);
    inicializar(lista);
    delete registro;
    delete lista;
}
