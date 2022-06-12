#include<stdio.h>
#include<conio.h>
#include<math.h>
/*Khai bao ham*/
void hoanvi(int &a, int &b);

int main()
{
	int a,b;
	
	printf("Nhap a =");
	scanf("%d", &a);
	printf("Nhap b =");
	scanf("%d", &b);
	printf("Da nhap:\na = %d \nb = %d\n", a, b);
	hoanvi(a,b);
	printf("Sau khi hoan vi:\na = %d\nb = %d \n", a, b);
	return 0;
	
}

/*Dinh nghia ham*/
/*hoan vi*/
void hoanvi(int &a, int &b){
	int tam = a;
	a = b;
	b = tam;
}


