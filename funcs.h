#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>

// Возвращает введённое число
// Осуществляет проверки на корректность ввода
int inputIntBasic(const size_t buf_size)
{
    char buf[buf_size];
    scanf("%s", buf);

    // Функция atoi() конвертирует строку, на которую указывает параметр str, в
    // величину типа int. Строка должна содержать корректную запись целого числа.
    // В противном случае возвращается 0.
    while ((atoi(buf) == 0) && (buf[0] != '0'))
    {
        printf("Вы ввели не число. Попроуйте ещё раз: ");
        scanf("%s", buf);
    }

    // Возвращаем результат ввода
    return atoi(buf);
}

// Распределяет память для массива типа 'unsigned int'
// Осуществляет проверку на правильность выделения памяти
unsigned int *alloc_mem_uint_arr(const size_t size)
{
    unsigned int *p = (unsigned int *)calloc(size, sizeof(unsigned int));

    if (!p)
    {
        printf("Не удалось выделить память для массива. Статус выхода =\'-1\'\n");
        exit(-1);
    }

    return p;
}

// Освобождение памяти для массива типа 'unsigned int'
void dealloc_mem_uint_arr(unsigned int *arr)
{
    free(arr);
    arr = NULL;
}

// Возвращает массив заданного размера, заполненный числами типа 'unsigned int'
unsigned int *random_fill_uint_arr(const size_t size, const int min, const int max)
{
    srand(time(NULL));
    unsigned int *arr = alloc_mem_uint_arr(size);

    for (size_t i = 0UL; i < size; i++)
    {
        // Случайные числа от 1 до 255
        arr[i] = rand() % max + min;
    }

    return arr;
}

void print_uint_arr(const unsigned int *arr, const size_t size)
{
    printf("Массив неотрицательных чисел:\n");
    for (size_t i = 0UL; i < size; i++)
    {
        printf("parr[%ld] = %d\n", i, arr[i]);
    }
    printf("\n");
}
