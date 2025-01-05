#include <stdio.h>

int main() {
    int liczba, maks=0, suma = 0, licznik = 0;

    while (1) {
        printf("Podaj liczbe: ");
        scanf_s("%d", &liczba);
        if (liczba < 0) break;

        suma += liczba;
        if (liczba > maks) maks = liczba;
        licznik++;
    }

    if (licznik > 0) {
        printf("Suma: %d\n", suma);
        printf("Srednia: %.2f\n", (float)suma / licznik);
        printf("najwyzsza wartosc: %d\n", maks);
    }
    else {
        printf("Brak danych\n");
    }
    return 0;
}