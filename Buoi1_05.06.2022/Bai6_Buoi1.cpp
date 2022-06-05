#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<iostream>
int main()
{
	int n;
	int dem;
	int kq=0;
	printf("Nhap so n:");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai so n:");
		scanf("%d", &n);
	}
	dem = n;
	while(dem!= 0)
	{
		dem = n%10;
		kq += dem;
		n/=10;
	}
	printf("ket qua : %d",kq);
	return 0;
}
