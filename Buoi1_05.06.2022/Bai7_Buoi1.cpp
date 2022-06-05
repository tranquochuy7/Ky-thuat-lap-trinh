#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<iostream>
int main()
{
	int a,b;
	printf("Nhap so a:");
	scanf("%d", &a);
	printf("Nhap so b:");
	scanf("%d", &b);
	if(a>b)
	{
		printf("a > b");
	}else if(a<b){
		printf("a < b");
	}
	else if(a=b){
		printf("a = b");	
	}
	return 0;
}
