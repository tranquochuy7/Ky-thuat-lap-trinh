#include<stdio.h>
#include<conio.h>

int main()
{
	int malop;
	char tenlop[100];
	int masv;
	char hoten[100];
	int ngaysinh;
	char diachi[100];
	int sdt;
	//nhap
	printf("nhap ma lop: \n");
	scanf("%d", &malop);
	printf("nhap ten lop: \n");
	scanf("%s", &tenlop);
	printf("nhap ma sinh vien: \n");
	scanf("%d", &masv);
	printf("nhap ho ten: \n");
	scanf("%s", &hoten);
	printf("nhap ngay thang nam sinh: \n");
	scanf("%d", &ngaysinh);
	printf("nhap dia chi: \n");
	scanf("%s", &diachi);
	printf("nhap so dien thoai: \n");
	scanf("%d", &sdt);
	//xuat
	printf("------------------------\n");
	printf("ma lop: %d\n",malop);
	printf("nhap ten lop: %s\n", tenlop);
	
	return 0;
}
