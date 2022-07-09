#include<stdio.h>
#include<conio.h>
/*
Cho tap tin Ontap1Cau4.inp co cau truc nhu sau:
- Dong 1: chua mot so nguyen duong n (n la so phan tu cua mang mot chieu)
- Dong 2: chua n so nguyen, moi so cach nhau boi khoang trang (cac gia tri cua mang
mot chieu)
Yeu cau:
- Doc du lieu tu tap tin Ontap1Cau4.inp vao mang mot chieu
- Ghi mang mot chieu len tap tin Ontap1Cau4.out
- Tinh tong cac phan tu trong mang mot chieu. Ghi ket qua tinh duoc len tap tin
Ontap1Cau4.out
*/
int main()
{
	
	int n;
	int a[100];
	
	FILE *f1, *f2;
	
	f1 = fopen("Ontap1Cau4.inp", "rt");
	
	if(f1 == NULL)
	{
		printf("Mo tap tin khong thanh cong");
	} else {
		printf("Mo tap tin thanh cong");
		
		fscanf(f1, "%d", &n);
		
		for(int i = 0; i<n; i++)
		{
			fscanf(f1, "%d", &a[i]);
		}
		
		f2 = fopen("Ontap1Cau4.out", "wt");
		
		fprintf(f2, "Mang 1 chieu: ");
		for(int i = 0; i<n; i++)
		{
			fprintf(f2, "%3d", a[i]);
		}
		
		int tong;
		
		for(int i = 0; i<n; i++)
		{
			tong = tong + a[i];
		}
		
		fprintf(f2, "\nTong = %d", tong);
		
		printf("\nDa xu ly xong");
		fclose(f1);
		fclose(f2);
		
	}
	return 0;
}
