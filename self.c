/*
 * Студент: Пылинский Даниил Максимович
 * Группа: ПИ 1-1
 * Лабораторная работа № 7
 * Назначение: Самостоятельная работа. Копирование массива с заменой отрицательных элементов нулями.
 */

#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
    int a[MAX_SIZE];
    int b[MAX_SIZE];
    int n;

    printf("Enter n (1..100): ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }

    if (n < 1 || n > MAX_SIZE) {
        printf("Size error\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        if (scanf("%d", &a[i]) != 1) {
            printf("Input error\n");
            return 1;
        }
        if (a[i] < -1000 || a[i] > 1000) {
            printf("Value error\n");
            return 1;
        }
    }

    int changes = 0;       // Счётчик замен
    long long sum_b = 0;   // Сумма элементов массива b

    // Копирование с обработкой по условию задания
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            b[i] = 0;
            changes++;
        } else {
            b[i] = a[i];
        }
        sum_b += b[i];
    }

    // Вывод обоих массивов и показателей по условию методички
    printf("a: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("b: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    printf("замен: %d\n", changes);
    printf("сумма: %lld\n", sum_b);

    return 0;
}
