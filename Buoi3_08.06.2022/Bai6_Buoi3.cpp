#include<stdio.h>
#include<conio.h>

/*Khai bao ham*/
int  ucln(int a, int b);

int main()
{
	int a, b, kq=0;
	
	printf("Nhap a =");
	scanf("%d", &a);
	printf("Nhap b =");
	scanf("%d", &b);

	kq=ucln(a, b); 
	printf("uoc chung lon nhat la = %d", kq);
	
	return 0;
}

/*Dinh nghia ham*/
int  ucln(int a, int b)
{	
	while (a*b!=0){
		if(a>b){
			a%=b;
		}
		else{
			b%=a;
		}	
	}	
	return a+b;
}

