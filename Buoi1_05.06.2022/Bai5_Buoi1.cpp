#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<iostream>
int main()
{
	int n;
	float x;
	int kq;
	printf("Nhap so n:");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai so n:");
		scanf("%d", &n);
	}
	printf("Nhap so x:");
	scanf("%f", &x);
	kq = pow((x*x+1),n);
	printf("ket qua : %d",kq);
	return 0;
}
