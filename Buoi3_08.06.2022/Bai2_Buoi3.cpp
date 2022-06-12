#include<stdio.h>
#include<conio.h>
// nhap n=4 se cho ra ket qua la 10
// ham dung de tinh tong tu 1 den n
//ham nguoi dung tu dinh nghia la tinhtoi
/*Khai bao ham*/
int  Tinhtich(int n);

int main()
{
	int n, kq=0;
	do {
		printf("Nhap vao 1 so nguyen duong n=");
		scanf("%d", &n);
	} while(n<=0);

	kq=Tinhtich(n); 
	printf("Ket qua = %d", kq);
	
	return 0;
}

/*Dinh nghia ham*/
int  Tinhtich(int n)
{	int i, s;
	s=0;

	for(i=1; i<=n; i++) 
	{
		s=s*i;
	}

	return s;
}

