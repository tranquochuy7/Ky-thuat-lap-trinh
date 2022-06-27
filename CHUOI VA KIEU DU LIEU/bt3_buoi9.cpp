#include <stdio.h>
#include <conio.h>
#include <string.h>
/*Yêu cầu:

- Lưu bài với tên Bai1_Buoi9.cpp thành Bai3_Buoi9.cpp. Sửa chương trình sao cho khi chạy sẽ cho phép:

- Nhập vào 1 chuỗi ký tự

- Xuất chuỗi vừa nhập ra màn hình

- Kiểm tra xem chuỗi vừa nhập đối xứng hay không.

- Nhập vào 1 ký tự bất kỳ. Đếm xem ký tự vừa nhập xuất hiện bao nhiều lần trong chuỗi.

- Nhập vào 1 chuỗi s2. Cho biết chuỗi s2 có xuất hiện trong chuỗi ban đầu hay không*/
void nhapchuoi(char s[100]);
void xuatchuoi(char s[100]);
int kiemTraDoiXung(char s[100]);
int kiemtraxh(char s[100], char s1[100]);
int dem(char s[100], char t);
int main()
{
	char s[100], s1[100];
	char t;
	nhapchuoi(s);
	xuatchuoi(s);
	if (kiemTraDoiXung(s))
	{
		printf("\nDay la chuoi doi xung!");
	}
	else
	{
		printf("\nDay la chuoi khong doi xung!");
	}
	printf("\nNhap ky tu can kiem tra : ");
	scanf("%c", &t);
	printf("so lan xuat hien cua ky tu %c la: %d", t, dem(s, t));
	printf("\nnhap ki tu s2 : ");
	scanf("%s", &s1);
	int kt = kiemtraxh(s, s1);
	if (kt == 1)
	{
		printf("chuoi s2 xuat hien trong s1");
	}
	else
	{
		printf("chuoi s2 khong xuat hien trong s1");
	}

	return 0;
}
void nhapchuoi(char s[100])
{
	printf("nhap ki tu : ");
	gets(s);
}
void xuatchuoi(char s[100])
{
	printf("chuoi vua nhap la: %s", s);
}
int kiemTraDoiXung(char s[100])
{
	int len = strlen(s);
	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return 0;
	}
	return 1;
}
int dem(char s[100], char t)
{
	int dem = 0;
	for (int i = 0; i <= strlen(s); i++)
	{
		if (s[i] == t)
			dem++;
	}
	return dem;
}
int kiemtraxh(char s[100], char s1[100])
{
	int chieudai1 = strlen(s);
	int chieudai2 = strlen(s1);
	for (int i = 0; i < chieudai1; i++)
	{
		for (int j = 0; j < chieudai2; j++)
		{
			if (s[i] == s[j])
			{
				return 1;
			}
		}
	}
	return 0;
}
