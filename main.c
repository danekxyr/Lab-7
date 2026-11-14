/*
 * Студент: Пылинский Даниил Максимович
 * Группа: ПИ 1-1
 * Лабораторная работа № 7
 * Назначение: Ввод одномерного массива и подсчёт статистики его элементов
 */

#include <stdio.h>
#define MAX_SIZE 100

int main(void)
{
    int a[MAX_SIZE], n;

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

    long long sum = 0;
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] > 0) {
            positive++;
        } else if (a[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    double average = (double)sum / n;

    printf("Array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\nSum = %lld\n", sum);
    printf("Average = %.2f\n", average);
    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}
