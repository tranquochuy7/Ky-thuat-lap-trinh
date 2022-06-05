#include<stdio.h>
#include<conio.h>
#include<iostream>
int main()
{
	int a, b;
	int cv, dt;

	printf("Nhap chieu dai HCN:");
	scanf("%d", &a);
	printf("Nhap chieu rong HCN:");
	scanf("%d", &b);
	
	cv=(a+b)*2;
	dt=a*b;
	printf("Chu vi HCN= %d\n", dt);
	printf("Dien tich HCN= %d \n", cv);	
	
	return 0;
}
