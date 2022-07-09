#include<stdio.h>
#include<conio.h>

int tinhTongSoLe(int n);

int main()
{
	int n;
	do{
		printf("Nhap so nguyen n: ");
		scanf("%d", &n);
		
		if(n<0)
			printf("n phai lon hon 0! ");
	}while(n<0);
	
	printf("S = 1 + 3 + 5 + ... + (2n+1) = %d ", tinhTongSoLe(n));
	
	return 0;
}
int tinhTongSoLe(int n)
{
	if(n==0)
	{
		return 1;
	} else {
		return tinhTongSoLe(n-1) + (2*n+1);
	}
}
