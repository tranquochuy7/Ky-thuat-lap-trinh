#include<stdio.h>
#include<conio.h>

/*Khai bao ham*/
int  TinhdtHCN(int a, int b);

int main()
{
	int a, b, kq=0;
	
	printf("Nhap chieu dai =");
	scanf("%d", &a);
	printf("Nhap chieu rong=");
	scanf("%d", &b);

	kq=TinhdtHCN(a, b); 
	printf("Ket qua = %d", kq);
	
	return 0;
}

/*Dinh nghia ham*/
int  TinhdtHCN(int a, int b)
{	
	int s;
	s= a*b;
	
	return s;
}

