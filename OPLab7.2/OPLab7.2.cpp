#include <stdio.h> 
#include <math.h> 
#include <Windows.h> 

int main() {
    int x, y, z, result, min_value;

    printf("Введіть значення x: ");
    scanf_s("%d", &x);
    printf("Введіть значення y: ");
    scanf_s("%d", &y);
    printf("Введіть значення z: ");
    scanf_s("%d", &z);

    min_value = (x + y) < (y + z) ? (x + y) : (y + z);
    result = min_value * x;

    printf("Результат: %d\n", result);

    return 0;
}