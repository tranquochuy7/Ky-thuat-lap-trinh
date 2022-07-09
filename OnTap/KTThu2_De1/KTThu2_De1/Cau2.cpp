#include<stdio.h>
#include<conio.h>
int SoMu(int x, int n)
{
	if(n==0)
	{
		return 1;
	} else {
		return SoMu(x, n-1) * x;
	}
}
int main()
{
	int x, n;
	do{
		printf("Nhap x: ");
		scanf("%d", &x);
		
		if(x<0)
		{
			printf("Nhap lai x>=0. ");
		}
	}while(x<0);
	
	do{
		printf("Nhap so mu n: ");
		scanf("%d", &n);
		
		if(n<0)
		{
			printf("Nhap lai n>=0. ");
		}
	}while(n<0);
	
	printf("%d^%d = %d", x, n, SoMu(x,n));
	
	return 0;
}


