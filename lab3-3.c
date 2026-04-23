#include <stdio.h>
#include <locale.h>

int main() {
    int episode;

    printf("--- Довідник серій «House of the Dragon» (1 сезон) ---\n");
    printf("Введіть номер серії (1-10): ");
    scanf("%d", &episode);

    switch (episode) {
        case 1:
            printf("Назва: «Спадкоємці Дракона» (The Heirs of the Dragon)\n");
            printf("Дата прем'єри: 21 серпня 2022\n");
            break;
        case 2:
            printf("Назва: «Принц-пустун» (The Rogue Prince)\n");
            printf("Дата прем'єри: 28 серпня 2022\n");
            break;
        case 3:
            printf("Назва: «Другий свого імені» (Second of His Name)\n");
            printf("Дата прем'єри: 4 вересня 2022\n");
            break;
        case 4:
            printf("Назва: «Король Вузького моря» (King of the Narrow Sea)\n");
            printf("Дата прем'єри: 11 вересня 2022\n");
            break;
        case 5:
            printf("Назва: «Ми освітлюємо шлях» (We Light the Way)\n");
            printf("Дата прем'єри: 18 вересня 2022\n");
            break;
        case 6:
            printf("Назва: «Принцеса та королева» (The Princess and the Queen)\n");
            printf("Дата прем'єри: 25 вересня 2022\n");
            break;
        case 7:
            printf("Назва: «Дрифтмарк» (Driftmark)\n");
            printf("Дата прем'єри: 2 жовтня 2022\n");
            break;
        case 8:
            printf("Назва: «Лорд Припливів» (The Lord of the Tides)\n");
            printf("Дата прем'єри: 9 жовтня 2022\n");
            break;
        case 9:
            printf("Назва: «Зелена рада» (The Green Council)\n");
            printf("Дата прем'єри: 16 жовтня 2022\n");
            break;
        case 10:
            printf("Назва: «Чорна королева» (The Black Queen)\n");
            printf("Дата прем'єри: 23 жовтня 2022\n");
            break;
        default:
            printf("Помилка: Невірний номер серії. Введіть число від 1 до 10.\n");
        break;
    }

    return 0;
}