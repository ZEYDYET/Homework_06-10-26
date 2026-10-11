#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    //виставляю кодировку виводу консолі в UTF-8
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // Умова: Обчислити суму ... із заданою точністю E (1 > E > 0). 
    // Вважати, що необхідну точність досягнуто, якщо черговий доданок виявився по модулю менше, ніж E.  

    double E, term;
    double sum = 0.0;
    int i = 1;

    printf("Введіть точність E (наприклад, 0.001): ");
    scanf("%lf", &E);

    if (E <= 0 || E >= 1) {
        printf("Помилка: Точність E повинна бути в межах (0 < E < 1).\n");
        return 1;
    }

    // Перший розрахунок доданка
    term = 1.0 / (i * i);

    while (term >= E) {
        sum += term;
        i++;
        term = 1.0 / (i * i);
    }

    printf("Обчислена сума: %lf\n", sum);
    printf("Кількість ітерацій: %d\n", i - 1);
    printf("Черговий доданок, який став меншим за E: %lf\n", term);

    return 0;
}