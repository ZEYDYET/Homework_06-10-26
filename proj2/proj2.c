#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    //виставляю кодировку виводу консолі в UTF-8
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // Умова: Написати програму, яка генерує у вказаних користувачем межах n випадкових: 
    // цілих чисел (int), дійсних чисел (float або double), символів (char). 
    // Для кожного з трьох випадків користувач задає межі діапазону.  

    int n, i;
    int int_min, int_max;
    float fl_min, fl_max;
    char ch_min, ch_max;

    // Ініціалізація генератора випадкових чисел
    srand(time(NULL));

    printf("Введіть кількість випадкових значень (n): ");
    scanf("%d", &n);

    // Цілі числа
    printf("\nВведіть діапазон для цілих чисел (min max): ");
    scanf("%d %d", &int_min, &int_max);
    printf("Згенеровані цілі числа: ");
    for (i = 0; i < n; i++) {
        printf("%d ", rand() % (int_max - int_min + 1) + int_min);
    }
    printf("\n");

    // Дійсні числа
    printf("\nВведіть діапазон для дійсних чисел (min max): ");
    scanf("%f %f", &fl_min, &fl_max);
    printf("Згенеровані дійсні числа: ");
    for (i = 0; i < n; i++) {
        float random_float = fl_min + ((float)rand() / RAND_MAX) * (fl_max - fl_min);
        printf("%.2f ", random_float);
    }
    printf("\n");

    // Символи
    printf("\nВведіть діапазон для символів (наприклад, a f): ");
    scanf(" %c %c", &ch_min, &ch_max);
    printf("Згенеровані символи: ");
    for (i = 0; i < n; i++) {
        char random_char = rand() % (ch_max - ch_min + 1) + ch_min;
        printf("%c ", random_char);
    }
    printf("\n");

    return 0;
}