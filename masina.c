Masina* creareMasina(const char *marca, int pret, const char *numar) {
    Masina *m = (Masina*)malloc(sizeof(Masina));
    if (m == NULL) {
        printf("Eroare la alocarea memoriei pentru masina.\n");
        return NULL;
    }

    m->marca = (char*)malloc((strlen(marca) + 1) * sizeof(char));
    if (m->marca == NULL) {
        printf("Eroare la alocarea memoriei pentru marca.\n");
        free(m);
        return NULL;
    }

    strcpy(m->marca, marca);
    m->pret = pret;
    strncpy(m->numar, numar, 7);
    m->numar[7] = '\0';

    return m;
}

void citireMasina(Masina *m) {
    char bufferMarca[100];
    char bufferNumar[50];

    printf("Marca: ");
    scanf("%99s", bufferMarca);

    printf("Pret: ");
    scanf("%d", &m->pret);

    printf("Numar: ");
    scanf("%49s", bufferNumar);

    if (m->marca != NULL) {
        free(m->marca);
    }

    m->marca = (char*)malloc((strlen(bufferMarca) + 1) * sizeof(char));
    if (m->marca == NULL) {
        printf("Eroare la alocarea memoriei pentru marca.\n");
        return;
    }

    strcpy(m->marca, bufferMarca);
    strncpy(m->numar, bufferNumar, 7);
    m->numar[7] = '\0';
}

void afisareMasina(const Masina *m) {
    if (m != NULL) {
        printf("Marca: %s | Pret: %d | Numar: %s\n", m->marca, m->pret, m->numar);
    }
}

void eliberareMasina(Masina *m) {
    if (m != NULL) {
        free(m->marca);
        free(m);
    }
}
