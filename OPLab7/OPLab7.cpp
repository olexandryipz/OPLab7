#include <stdio.h> 
#include <math.h> 
#include <Windows.h> 

int main() {
    
    double x, y, xmax, ymax, xmaxneg;
    printf("Введіть значення x: ");
    scanf_s("%lf", &x);
    printf("Введіть значення y: ");
    scanf_s("%lf", &y);
    xmaxneg = -1 + y;
    if (x < 0)

    {
        xmax = -1 + y;
        ymax = 1 + x;
    }
    else
    {
        xmax = 1 - y;
        ymax = 1 - x;
    }
    if (x > xmax && y < ymax && x > -1 && x < 0 && y < 1 && y > 0)
    printf("Істина\n");
    else if (x < xmax && y < ymax && x < 1 && x >0 && y < 1 && y > 0 || x > xmaxneg && x < 0 || y > 1 && x < 0)
    printf("Хиба\n");
    else
    printf("Істина\n");
    return 0;
}