#include <stdio.h>
#include <time.h>

int main() {
    int a, liczba, suma= 0;
    srand(time(NULL));
    printf("Podaj ilosc liczb w ciagu: ");
    scanf_s("%d", &a);
    if (a > 0) {

        for (int i = 0; i < a; i++) {
            liczba = rand() % 56 - 10;
            if (liczba % 2 == 0) suma += liczba;
        }

        printf("Suma tych liczb: %d\n", suma);
    }
    else
        printf("n jest mniejsze od 0");
    return 0;
}
