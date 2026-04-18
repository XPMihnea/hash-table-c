#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "masina.h"

#define TABLE_SIZE 256

typedef struct HashTable {
    Masina **table;
    int size;
} HashTable;

HashTable* creareHashTable(int size);

int hashFunction(int key, int size);

int insert_HT(HashTable *ht, Masina *var);

Masina* get_value_HT(HashTable *ht, int key);

void afisareHashTable(HashTable *ht);

void eliberareHashTable(HashTable *ht);

#endif
