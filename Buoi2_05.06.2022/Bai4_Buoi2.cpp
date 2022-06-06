#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i;
	
	do
	{
		printf("Nhap 1 so nguyen duong n=");
		scanf("%d", &n);
	} while(n<=0);
	
	printf("\nCac so chan tu 0 den %d la: ", n);
	for(i=0; i<=n; i++)
	{
			if(i%2==0)
				printf("%3d", i);
	}
	
		
	return 0;
}
