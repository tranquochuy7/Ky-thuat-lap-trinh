#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	// Khai bao va khoi tao gia tri cho mang 1 chieu a
   
   	do{
   		printf("nhap phan tu N:");
   		scanf("%d",&n);
	   }while(n<=0);
	int a[n];
	//nhap mang
	for(i = 0; i<n; i++)
	{
		printf("\nnhap phan tu a[%d]=",i+1);
		scanf("%d", &a[i]);
	}
	// xuat mang
	for(i = 0;i<n;i++)
	{
		printf("%3d", a[i]);
	}
	//tinh tong so lẻ
	int tong = 0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		tong += a[i];	
	}
	printf("\ntong le la: %d",tong);
	
	return 0;
}
