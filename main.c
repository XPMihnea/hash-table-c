int main() {
    HashTable *ht = creareHashTable(TABLE_SIZE);
    if (ht == NULL) {
        return 1;
    }
    Masina *m1 = creareMasina("Dacia_Logan", 120, "B123ABC");
    Masina *m2 = creareMasina("BMW_X5", 376, "CJ99XYZ");
    Masina *m3 = creareMasina("Audi_A4", 632, "IF10QWE");
    Masina *m4 = creareMasina("Ford_Focus", 888, "AG45RTY");

    insert_HT(ht, m1);
    insert_HT(ht, m2);
    insert_HT(ht, m3);
    insert_HT(ht, m4);

    afisareHashTable(ht);

    printf("\n Cautare dupa pret \n");
    int cheie = 376;
    Masina *gasita = get_value_HT(ht, cheie);

    if (gasita != NULL) {
        printf("Masina gasita:\n");
        afisareMasina(gasita);
    } else {
        printf("Nu exista masina cu pretul %d\n", cheie);
    }

    eliberareHashTable(ht);

    return 0;
}
