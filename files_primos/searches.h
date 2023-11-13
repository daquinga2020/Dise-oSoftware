#ifndef SEARCHES_H_INCLUDED
#define SEARCHES_H_INCLUDED

int is_found_linear (const int an_array[], const int size, const int target);
int is_found_binary (const int an_array[], const int size, const int target);
int linear_search(const int array_primes[], const int size, const int init_value, const bool descending);
int linear_binary_search(const int array_primes[], const int size, const int init_value, const bool descending, const bool binary);

#endif // SEARCHES_H_INCLUDED
