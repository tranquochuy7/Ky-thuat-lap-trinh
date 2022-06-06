
#include<stdio.h>
#include<conio.h>
//nhap n = 4 thi cho ra ket qua la 10
//chuong trinh dung de tinh tong tu 1 den n

int main()
{
	int n, s, i;
	
	do
	{
		printf("Nhap 1 so nguyen duong n=");
		scanf("%d", &n);
	} while(n<=0);
	s=0;
	for(i=1; i<=n; i++)
	{	s=s+i; 
	}
	printf("\nS= %d", s);	
		
	return 0;
}
