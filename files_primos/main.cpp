#include <iostream>
#include "primes.h"
#include "searches.h"

using namespace std;

int main()
{
    const int FIRST_VALUE = 2;
    const int LAST_VALUE = 10000000;
    const int ARRAY_SIZE = 664579;
    static int array_primes[ARRAY_SIZE];

    cout << store_primes(array_primes, FIRST_VALUE, LAST_VALUE) << endl;
   //cout << number_of_primes(FIRST_VALUE, LAST_VALUE) << endl;

    int init_value = 1000000;
    bool descending = true;
    bool binary = true;

    cout << linear_binary_search(array_primes, ARRAY_SIZE, init_value, descending, binary) << endl;
    binary = false;
    cout << linear_binary_search(array_primes, ARRAY_SIZE, init_value, descending, binary) << endl;

    init_value = 9876543;
    descending = false;
    binary = false;

    cout << linear_binary_search(array_primes, ARRAY_SIZE, init_value, descending, binary) << endl;
    binary = true;
    cout << linear_binary_search(array_primes, ARRAY_SIZE, init_value, descending, binary) << endl;


    return 0;
}
