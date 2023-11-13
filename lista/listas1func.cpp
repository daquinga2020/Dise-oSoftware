#include "lista1.h"
#include <iostream>
using namespace std;

// resetea el contador de elementos
void inicializar(tLista& lista)
{
    lista.contador = 0;
}

// muestra todos los elementos de la lista
void mostrar(const tLista& lista)
{
    if(lista.contador == 0)
    {
        cout << "LISTA VACÍA!!" << endl;
    }
    for (int i = 0; i < lista.contador; i++)
    {
        cout << lista.registros[i].codigo << " || ";
        cout << lista.registros[i].nombre << " || ";
        cout << lista.registros[i].valor << " || ";
        cout << endl;
    }
    cout << endl;
}

// intenta insertar un elemento al final de la lista
// devuelve true si el elemento ha sido insertado, false si no
bool insertar(tLista& lista, tRegistro& registro)
{
    bool insertado = false;

    if (lista.contador < TAMANO)
    {
        lista.registros[lista.contador] = registro;
        lista.contador++;
        insertado = true;
    }

    return insertado;
}

// busca un elemento en la lista, por código
// devuelve la posicion del elemento, -1 si no lo encuentra
int buscar(const tLista& lista, int codigo)
{
    int posicion = -1;
    int indice = 0;

    while ( (posicion == -1) && (indice < TAMANO) )
    {
        if (lista.registros[indice].codigo == codigo )
            posicion = indice;

        indice++;
    }
    return posicion;
}

// intenta eliminar un elemento de la lista, por codigo
// devuelve true si el elemento ha sido eliminado, false si no
bool eliminar(tLista& lista, int codigo)
{
    bool eliminado = false;
    int posicion = buscar(lista,codigo);

    if (posicion != -1)
    {
        for (int i = posicion; i < lista.contador; i++)
        {
            lista.registros[i] = lista.registros[i + 1];
        }
        eliminado = true;
        lista.contador--;
    }

    return eliminado;
}
