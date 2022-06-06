#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i, j ,S = 0;
	
		printf("Nhap 1 so nguyen duong n=");
		scanf("%d", &n);
	while(n<=0){
		printf("Nhap lai 1 so nguyen duong n=");
		scanf("%d", &n);
	}

	printf("bang cuu chuong %d\n",n);
	for(i=0;i<10; i++)
	{
		S = n*i;
		printf("%2d x %2d = %d\n", n, i, S);
	} 
	return 0;	
}
