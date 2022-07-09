#include <stdio.h>
#include <conio.h>
/***Viết chương trình thực hiện các yêu cầu sau:**

1. Nhập ma trận số nguyên gồm m dòng, n cột (m, n nhập từ bàn phím)

2. Xuất ma trận vừa nhập

3. Tìm phần tử lớn nhất trên ma trận.

4. Tính tổng các phần tử trên ma trận

5. Tìm và in ra các vị trí mà x xuất hiện trên ma trận (với x nhập từ bàn phím)

6. Đếm số phần tử âm của ma trận

7. Tìm phần tử nhỏ nhất trên dòng k (với k nhập từ bàn phím)

8. Tính tích các phần tử trên cột k (với k nhập từ bàn phím)

9. Một phần tử được gọi là điểm yên ngựa nếu nó là phần tử nhỏ nhất trong dòng và

lớn nhất trong cột. Hãy in ra các điểm yên ngựa có thể có.

10. Sắp xếp ma trận tăng dần từ trên xuống dưới và từ trái qua phải*/
//nếu tính đường chéo chính i = j
//tính tam giac dưới chéo chính trừ chéo chính i>j thêm >= tính lun chéo phụ
//tam giác trên chéo chính i<j <=
//i+j = n-1 đường chéo phụ 
//ính tam giac dưới i+j > n-1 >=
//tam giác trên i+j<n-1 <=
int mindong(int a[100][100], int m, int n, int k)
{
	int min = a[k][0];
	for (int j = 0; j < n; j++)
	{
		if (a[k][j] < min)
			min = a[k][j];
	}
	return min;
}

int maxcot(int a[100][100], int m, int n, int k)
{
	int max = a[0][k];
	for (int i = 0; i < m; i++)
	{
		if (a[i][k] > max)
			max = a[i][k];
	}
	return max;
}
int main()
{
	int m, n, i, j;
	int a[100][100];

	printf("Nhap so dong: ");
	scanf("%d", &m);

	printf("Nhap so cot: ");
	scanf("%d", &n);
	// 1. Nhap mang
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	// 2. Xuat mang
	printf("Ma tran vua nhap: ");
	for (i = 0; i < m; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%5d", a[i][j]);
		}
	}

	// 3. Tim gia tri lon nhat
	int max;
	max = a[0][0];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	printf("\nGia tri lon nhat tren ma tran la: %d", max);

	// 4. Tong cac phan tu tren ma tran
	int tong = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			tong += a[i][j];
		}
	}
	printf("\nTong cac phan tu = %d", tong);

	// 5. Tim va in ra cac vi tri ma phan tu x xuat hien tren ma tran
	int x;
	int demX = 0;
	printf("\nNhap x: ");
	scanf("%d", &x);

	printf("Phan tu %d xuat hien o cac vi tri: ", x);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == x)
			{
				printf("(%d,%d)", i, j);
				demX++;
			}
		}
	}
	if (demX == 0)
		printf("Khong tim thay %d tren ma tran", x);

	// 6. Dem so phan tu am cua ma tran
	int demAm = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
			{
				demAm++;
			}
		}
	}
	printf("\nSo phan tu am cua ma tran la: %d", demAm);

	// 7. Tim phan tu nho nhat tren dong k
	int k;
	printf("\nNhap dong k: ");
	scanf("%d", &k);

	int min = a[k][0];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[k][j] < min)
			{
				min = a[k][j];
			}
		}
	}
	printf("\nPhan tu nho nhat tren dong %d la: %d", k, min);

	// 8. Tinh tich cac phan tu tren cot k
	int k1;
	printf("\nNhap dong k: ");
	scanf("%d", &k1);
	int tich = 1;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][k1] == a[i][j])
				tich *= a[i][k1];
		}
	}
	printf("\nTich cac phan tu tren cot %d = %d", k1, tich);

	/*
	9. Mot phan tu duoc goi la diem yen ngua neu no la phan tu nho nhat trong dong va lon nhat trong cot.
	Hay in ra cac diem yen ngua co the co.
	Nhap m = 3, n = 3. Nhap 1,2,3,4,5,6,7,8,9 => Diem yen ngua = 7
	*/
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == mindong(a, m, n, i) && a[i][j] == maxcot(a, m, n, j))
				printf("\nDiem yen ngua = %d", a[i][j]);
		}

	// 10. Sap xep ma tran tang dan tu tren xuong duoi va tu trai qua phai
	for (i = 0; i < m * n - 1; i++)
		for (j = i + 1; j < m * n; j++)
		{
			if (a[i / n][i % n] > a[j / n][j % n])
			{
				int tam = a[i / n][i % n];
				a[i / n][i % n] = a[j / n][j % n];
				a[j / n][j % n] = tam;
			}
		}
	// Sau sap xep
	printf("\nMang sau khi sap xep:\n");
	for (i = 0; i < m; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
			printf("%4d", a[i][j]);
	}

	return 0;
}
/***Viết chương trình thực hiện các yêu cầu sau:**

1. Nhập ma trận vuông số nguyên cấp n (n = số dòng = số cột, n nhập từ bàn phím thỏa n>0)

2. Xuất ma trận vừa nhập

3. Tìm phần tử nhỏ nhất trên ma trận.

4. Tính tổng các phần tử nằm trên đường chéo chính của ma trận

5. Tìm phần tử lớn nhất trên đường chéo phụ của ma trận

6. Đếm xem có bao nhiêu số chẵn nằm trong tam giác trên của đường chéo chính

(không kể đường chéo chính)

7. Tìm và in ra các sổ lẻ nằm trong tam giác dưới của đường chéo phụ (tính luôn

đường chéo phụ)*/
int main()
{
	int m, n, i, j;
	int a[100][100];
	do
	{
		printf("Nhap n = ");
		scanf("%d", &n);
	} while (n <= 0);

	// 1. Nhap mang
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	// 2. Xuat mang
	printf("Ma tran vua nhap: ");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%5d", a[i][j]);
		}
	}

	// 3. Tim phan tu nho nhat tren ma tran
	int min;
	min = a[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}
	printf("\nPhan tu nho nhat tren mang la: %d", min);

	// 4. Tinh tong cac phan tu nam tren duong cheo chinh
	int tong = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				tong = tong + a[i][j];
			}
		}
	}
	printf("\nTong phan tu nam tren duong cheo chinh = %d", tong);

	// 5.Tim phan tu lon nhat tren duong cheo phu
	int max;
	max = a[0][n - 1];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max && (i + j) == (n - 1))
			{
				max = a[i][j];
			}
		}
	}
	printf("\nGia tri lon nhat tren duong cheo phu la: %d", max);

	// 6.
	int demchan = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0 && (i > j))
			{
				demchan++;
			}
		}
	}
	printf("\nCo %d So chan nam trong tam giac tren cua duong cheo chinh", demchan);

	// 7.
	printf("\nSo le nam trong tam giac duoi duong cheo phu");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0 && (i + j) <= (n - 1))
			{
				printf("%d", a[i][j]);
			}
		}
	}

	return 0;
}