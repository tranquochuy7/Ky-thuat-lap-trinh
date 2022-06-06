#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i;
	
		printf("Nhap 1 so nguyen duong n=");
		scanf("%d", &n);
	while(n<=0)
	{
		printf("Nhap lai 1 so nguyen duong n=");
		scanf("%d", &n);
	}
	printf("so dao nguoc cua %d\n la:",n);
	for(;n!=0;n = n/10){
		printf("%d",n%10);
	}
	return 0;	
}
