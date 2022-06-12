#include<stdio.h>
#include<conio.h>

/*Khai bao ham*/
int  Tinhtong(int a, int b);

int main()
{
	int a, b, kq=0;
	
	printf("Nhap so nguyen thu 1=");
	scanf("%d", &a);
	printf("Nhap so nguyen thu 2=");
	scanf("%d", &b);

	kq=Tinhtong(a, b); 
	printf("Ket qua = %d", kq);
	
	return 0;
}

/*Dinh nghia ham*/
int  Tinhtong(int a, int b)
{	
	int s;
	s= a+b;
	
	return s;
}

