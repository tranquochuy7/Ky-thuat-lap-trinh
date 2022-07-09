#include<stdio.h>
#include<conio.h>
void nhapMang(int m, int n, int a[100][100])
{
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuatMang(int m, int n, int a[100][100])
{
	printf("Mang vua nhap: ");
	for(int i = 0; i<m; i++)
	{
		printf("\n");
		for(int j = 0; j<n; j++)
		{
			printf("%3d", a[i][j]);
		}
	}
}
int main()
{
	int m, n;
	int a[100][100];
	do{
		printf("Nhap dong m: ");
		scanf("%d", &m);
		
		if(m<=0)
			printf("Nhap lai m>0. ");
	}while(m<=0);
	
	do{
		printf("Nhap dong n: ");
		scanf("%d", &n);
		
		if(n<=0)
			printf("Nhap lai n>0. ");
	}while(n<=0);
	
	nhapMang(m, n, a);
	xuatMang(m, n, a);
	
	int demAm = 0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i][j] < 0)
			{
				demAm++;
			}
		}
	}
	
	printf("\nCo %d so am tren ma tran", demAm);
	
	int r;
	do{
		printf("\nNhap so nguyen r: ");
		scanf("%d", &r);
	}while(r<0 || r>=m);
	
	int min = a[r][0];
	for(int j = 0; j<n; j++)
	{
		if(a[r][j] < min)
		{
			min = a[r][j];
		}
	}
	printf("\nGia tri nho nhat tren dong r la: %d", min);
	
	return 0;
}


