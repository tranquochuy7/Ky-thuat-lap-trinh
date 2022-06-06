#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i, S = 0;
	
		printf("Nhap 1 so nguyen duong n=");
		scanf("%d", &n);
	while(n<=0){
		printf("Nhap lai 1 so nguyen duong n=");
		scanf("%d", &n);
	}
	for(i=1; i<=n; i++)
	{
			if(i%2==0)
			S = S+i;
	}
	printf("tong 1 so nguyen duong %d= %d",n,S);
	return 0;	
}
