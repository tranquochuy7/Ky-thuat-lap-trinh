#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<iostream>
int main()
{
	float a,b;
	printf("Nhap a:");
	scanf("%f", &a);
	printf("Nhap b:");
	scanf("%f", &b);

	if(a==0){
		if(b==0){
			printf("phuong trinh vo so nghiem");
		}
		else
		{
			printf("phuong trinh vo nghiem");
		}	
	}
	else{
			printf("phuong trinh co nghiem la: %.3f",-b/a);
	}
	
	return 0;
}
