#include<stdio.h>
#include<conio.h>

int main()
{
	int m, n;
	int a[100][100];
	
	FILE *f1, *f2;
	f1 = fopen("Ontap2Cau4.inp", "rt");
	
	if(f1 == NULL)
		printf("Khong mo duoc tap tin");
	else {
		printf("Mo tap tin thanh cong");
		
		fscanf(f1, "%d", &m);
		fscanf(f1, "%d", &n);
		
		for(int i = 0; i<m; i++)
		{
			for(int j = 0; j<n; j++)
			{
				fscanf(f1, "%d", &a[i][j]);
			}
		}
		
		f2 = fopen("Ontap2Cau4.out", "wt");
		
		fprintf(f2, "\nNoi dung mang hai chieu: ");
		for(int i = 0; i<m; i++)
		{
			fprintf(f2, "\n");
			for(int j = 0; j<n; j++)
			{
				fprintf(f2, "%3d", a[i][j]);
			}
		}
		
		int dem = 0;
		for(int i = 0; i<m; i++)
		{
			for(int j = 0; j<n; j++)
			{
				if(a[i][j] %2 ==0)
					dem ++;
			}
		}
		fprintf(f2, "\nCo %d so chan trong mang hai chieu", dem);
		
		printf("\nChuong trinh da xu ly");
		
		fclose(f1);
		fclose(f2);
	}
	return 0;
}
