#include <stdio.h> 
#include <math.h> 
#include <Windows.h> 

int main() {
    int X, Y, XThreePlusNumber, YThreePlusNumber;

    printf("Введіть число X: ");
    scanf_s("%d", &X);
    printf("Введіть число Y: ");
    scanf_s("%d", &Y);

    XThreePlusNumber = (X > 0 && X >= 100 && X <= 999) ? 1 : 0;
    YThreePlusNumber = (Y > 0 && Y >= 100 && Y <= 999) ? 1 : 0;

    if (XThreePlusNumber && YThreePlusNumber) {
        printf("X та Y - додатні та трьохзначні числа.\n");
    }
    else {
        printf("X та Y або одне з чисел не відповідають умовам (числа повинні бути додатніми та трьохзначними числами).\n");
    }

    return 0;
}