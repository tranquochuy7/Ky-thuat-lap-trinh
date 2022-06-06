#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
		printf("Nhap a=");
		scanf("%d", &a);
		printf("Nhap b=");
		scanf("%d", &b);
	while(a<0||b<0)
	{
		printf("Nhap lai a=");
		scanf("%d", &a);
		printf("Nhap lai b=");
		scanf("%d", &b);
	}
	for(int i =1 ; i<=a ; i++ )
	{
		for(int j = 1; j<=b; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;	
}
