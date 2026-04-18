#ifndef MASINA_H
#define MASINA_H

typedef struct Masina {
    char *marca;
    int pret;
    char numar[8];
} Masina;

Masina* creareMasina(const char *marca, int pret, const char *numar);
void citireMasina(Masina *m);
void afisareMasina(const Masina *m);
void eliberareMasina(Masina *m);

#endif
