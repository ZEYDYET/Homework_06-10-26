#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

int main() {
    //виставляю кодировку виводу консолі в UTF-8
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // Умова: Дано натуральне число n. 
    // З'ясувати, чи входить вказана користувачем цифра digit до запису числа n².  

    int n, square_n, digit, rem;
    bool found = false;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    printf("Введіть цифру для пошуку (0-9): ");
    scanf("%d", &digit);

    square_n = n * n;
    printf("Квадрат числа: %d\n", square_n);

   for (square_n; square_n > 0 && rem != digit; square_n /= 10)
   {
        rem = square_n % 10; // Отримуємо останню цифру
        if (rem == digit) {
            found = true;

        }
   }

    
    if (found) {
        printf("Цифра %d ВХОДИТЬ до запису квадрата числа.\n", digit);
    } else {
        printf("Цифра %d НЕ ВХОДИТЬ до запису квадрата числа.\n", digit);
    }

    return 0;
}