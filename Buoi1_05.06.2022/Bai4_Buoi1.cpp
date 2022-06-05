#include<stdio.h>
#include<conio.h>
#include<iostream>
int main()
{
	int a, b;
	int t,h,tich,thuong;

	printf("Nhap so a:");
	scanf("%d", &a);
	printf("Nhap so b:");
	scanf("%d", &b);
	
	t = a+b;
	h = a-b;
	tich = a*b;
	thuong = a/b;
	printf("tong= %d\n", t);
	printf("hieu= %d\n", h);
	printf("tich= %d\n", tich);
	printf("thuong= %d\n",thuong);
	
	return 0;
}
