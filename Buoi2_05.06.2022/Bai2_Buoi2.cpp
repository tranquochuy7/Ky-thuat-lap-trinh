
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, s, i;
	
		printf("Nhap so nguyen duong n=");
		scanf("%d", &n);
	while(n<=0){
			printf("Nhap lai so nguyen duong n=");
			scanf("%d", &n);
		}
	s=1;
	for(i=1; i<=n; i++)
	{	
		s=s*i; 
	}
	printf("giai thua cua n la: %d",s);	

	return 0;
}
