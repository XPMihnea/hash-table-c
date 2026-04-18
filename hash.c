int hashFunction(int key, int size) {
    return key % size;
}

HashTable* creareHashTable(int size) {
    HashTable *ht = (HashTable*)malloc(sizeof(HashTable));
    if (ht == NULL) {
        printf("Eroare la alocarea hash table.\n");
        return NULL;
    }

    ht->size = size;
    ht->table = (Masina**)malloc(size * sizeof(Masina*));
    if (ht->table == NULL) {
        printf("Eroare la alocarea vectorului hash table.\n");
        free(ht);
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        ht->table[i] = NULL;
    }

    return ht;
}

int insert_HT(HashTable *ht, Masina *var) {
    if (ht == NULL || var == NULL) {
        return 0;
    }

    int index = hashFunction(var->pret, ht->size);
    int start = index;

    while (ht->table[index] != NULL) {
        if (ht->table[index]->pret == var->pret) {
            return 0;
        }

        index = (index + 1) % ht->size;

        if (index == start) {
            return 0;
        }
    }

    ht->table[index] = var;
    return 1;
}
Masina* get_value_HT(HashTable *ht, int key) {
    if (ht == NULL) {
        return NULL;
    }

    int index = hashFunction(key, ht->size);
    int start = index;

    while (ht->table[index] != NULL) {
        if (ht->table[index]->pret == key) {
            return ht->table[index];
        }

        index = (index + 1) % ht->size;

        if (index == start) {
            break;
        }
    }

    return NULL;
}

void afisareHashTable(HashTable *ht) {
    if (ht == NULL) {
        return;
    }

    printf("\n--- Hash Table ---\n");
    for (int i = 0; i < ht->size; i++) {
        printf("[%d] ", i);
        if (ht->table[i] != NULL) {
            afisareMasina(ht->table[i]);
        } else {
            printf("NULL\n");
        }
    }
}

void eliberareHashTable(HashTable *ht) {
    if (ht != NULL) {
        for (int i = 0; i < ht->size; i++) {
            if (ht->table[i] != NULL) {
                eliberareMasina(ht->table[i]);
            }
        }
        free(ht->table);
        free(ht);
    }
}
