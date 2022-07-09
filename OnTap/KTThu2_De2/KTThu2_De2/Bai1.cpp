#include<stdio.h>
#include<conio.h>
void nhapMang(int m, int n, int a[100][100]);
void xuatMang(int m, int n, int a[100][100]);

int main()
{
	int m, n;
	int a[100][100];
	do{
		printf("Nhap so dong: ");
		scanf("%d", &m); 
	}while(m<=0);
	do{
		printf("Nhap so cot: ");
		scanf("%d", &n); 
	}while(n<=0);
	
	nhapMang(m, n, a);
	xuatMang(m, n, a);
	
	//
	int max = a[0][0]; 
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i][j]<max)
			{
				max = a[i][j]; 
			}
		} 
	} 
	printf("\nGia tri lon nhat tren ma tran la: %d", max);
	
	//
	int c; 
	do{
		printf("\nNhap so nguyen c: ");
		scanf("%d", &c); 
	}while(c<0 || c>=m); 
	
	int tich=1; 
	for(int i=0; i<m; i++)
	{
		tich = tich * a[i][c]; 
	} 
	printf("\nTich ma tran tren cot %d = %d", c, tich);
	
	return 0; 
} 

void nhapMang(int m, int n, int a[100][100])
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		} 
	} 
} 

void xuatMang(int m, int n, int a[100][100])
{
	printf("Mang vua nhap: "); 
	for(int i=0; i<m; i++)
	{
		printf("\n"); 
		for(int j=0; j<n; j++)
		{
			printf("%3d", a[i][j]);
		} 
	} 
} 
