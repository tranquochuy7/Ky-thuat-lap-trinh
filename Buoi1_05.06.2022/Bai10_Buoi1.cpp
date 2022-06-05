#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<iostream>
int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	while(n<1 || n>7){
		printf("Nhap lai n:");
		scanf("%d", &n);	
	}
	switch(n){
		case 1:
			printf("thu 2");
			break;
		case 2:
			printf("thu 3");
			break;
		case 3:
			printf("thu 4");
			break;
		case 4:
			printf("thu 5");
			break;
		case 5:
			printf("thu 6");
			break;
		case 6:
			printf("thu 7");
			break;
		case 7:
			printf("chu nhat");
			break;
	}
	return 0;
}
