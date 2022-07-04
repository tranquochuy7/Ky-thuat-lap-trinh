#include <stdio.h>
#include <conio.h>
float LuyThua(float x, int n);
int main()
{
    int n;
    float x;
    printf("nhap x: ");
    scanf("%f", &x);
    printf("nhap n: ");
    scanf("%d", &n);
    printf("kq = %lf",LuyThua(x, n));
    

    return 0;
}
float LuyThua(float x, int n)
{

    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return LuyThua(x, n + 1) * 1 / x;
    }
    return LuyThua(x, n - 1) * x;
}