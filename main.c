#include "menu_funcs.h"

void print_menu()
{
    int menuVar = 0;
    printf("Введите номер задания (от 1 до 5; 0 - для выхода): ");
    menuVar = inputInt();

    while (1)
    {
        if (menuVar == 0)
        {
            printf("Выход...\n");
            exit(0);
        }

        switch (menuVar)
        {
        case 1:
        {
            printf("Введите номер задания (от 1 до 5; 0 - для выхода): ");
            menuVar = inputInt();
            break;
        }
        case 2:
        {
            printf("Введите номер задания (от 1 до 5; 0 - для выхода): ");
            menuVar = inputInt();
            break;
        }
        case 3:
        {
            printf("Введите номер задания (от 1 до 5; 0 - для выхода): ");
            menuVar = inputInt();
            break;
        }
        case 4:
        {
            printf("Введите номер задания (от 1 до 5; 0 - для выхода): ");
            menuVar = inputInt();
            break;
        }
        case 5:
        {
            printf("Введите номер задания (от 1 до 5; 0 - для выхода): ");
            menuVar = inputInt();
            break;
        }
        default:
        {
            printf("Введён неверный номер задания. Попробуйте снова: ");
            menuVar = inputInt();
            break;
        }
        }
    }
}

int main()
{
    // Установка русского языка
    setlocale(LC_ALL, "rus");

    // Запуск меню
    print_menu();

    return 0;
}
