#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3;

    // Введення координат першої точки
    printf("Введіть x1: ");
    scanf("%lf", &x1);
    printf("Введіть y1: ");
    scanf("%lf", &y1);

    // Введення координат другої точки
    printf("Введіть x2: ");
    scanf("%lf", &x2);
    printf("Введіть y2: ");
    scanf("%lf", &y2);

    // Введення координат третьої точки
    printf("Введіть x3: ");
    scanf("%lf", &x3);
    printf("Введіть y3: ");
    scanf("%lf", &y3);

    // Обчислюємо частини умови колінеарності
    double part1 = (x2 - x1) * (y3 - y1);
    double part2 = (x3 - x1) * (y2 - y1);

    // Перевірка умови
    if (part1 == part2) {
        printf("\nТочки лежать на одній прямій.\n");
    }
    else {
        printf("\nТочки НЕ лежать на одній прямій.\n");
    }

    return 0;
}