#include<stdio.h>
#include<conio.h>
#include <iostream>
using namespace std;
 
int main()
{
    long n, i, s=0;
    printf("Nhap n=");
	scanf("%d", &n);
    for (i=1; i<n; i++)
        if (n%i==0)
            s+=i;
    if (s==n)
        printf("la so hoan hao");
    else
        printf("k phai so hoan hao");
}
