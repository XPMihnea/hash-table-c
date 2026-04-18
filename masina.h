#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 256

typedef struct Masina {
    char *marca;
    int pret;
    char numar[8];
} Masina;

typedef struct HashTable {
    Masina **table;
    int size;
} HashTable;