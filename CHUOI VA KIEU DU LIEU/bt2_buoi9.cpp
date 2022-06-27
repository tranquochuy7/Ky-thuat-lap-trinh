#include <stdio.h>
#include <conio.h>
#include <string.h>
/*Yêu cầu:

- Lưu bài với tên Bai1_Buoi9.cpp thành Bai2_Buoi9.cpp. Sửa chương trình sao cho khi chạy sẽ cho phép:

- Nhập vào 2 chuỗi ký tự s1, s2

- Xuất chuỗi s1, s2 vừa nhập ra màn hình

- So sánh hai chuỗi s1 và s2

- Sao chép nội dung của chuỗi s1 qua chuỗi s2. Xuất lại nội dung của chuỗi s1, s2 và xem kết quả

- So sánh lại hai chuỗi s1 và s2

- Nối nội dung của chuỗi s2 vào chuỗi s1. Xuất lại nội dung của chuỗi s1, s2 và xem kết quả

- So sánh lại hai chuỗi s1 và s2*/
void nhapchuoi(char s[100], char s1[100]);
void xuatchuoi(char s[100], char s1[100]);
int main()
{
	int i, j;
	char s[100];
	char s1[100];
	char s2[100];
	nhapchuoi(s, s1);
	xuatchuoi(s, s1);
	if (strcmp(s, s1) > 0)
	{
		printf("\ns1 lon hon s2");
	}
	else if (strcmp(s, s1) < 0)
	{
		printf("\ns1 nho hon s2");
	}
	else
	{
		printf("\ns1 bang s2");
	}
	strcpy(s1, s);
	printf("\nsao chep s1 va s2 la: ");
	printf("\ns1: ");
	puts(s);
	printf("\ns2: ");
	puts(s1);
	printf("\n so sanh lai");
	if (strcmp(s, s1) > 0)
	{
		printf("\ns1 lon hon s2");
	}
	else if (strcmp(s, s1) < 0)
	{
		printf("\ns1 nho hon s2");
	}
	else
	{
		printf("\ns1 bang s2");
	}
	strcat(s, s1);
	printf("\nNoi chuoi: %s", s);
	printf("\ns1: ");
	puts(s);
	printf("\ns2: ");
	puts(s1);
	printf("\n so sanh lai");
	if (strcmp(s, s1) > 0)
	{
		printf("\ns1 lon hon s2");
	}
	else if (strcmp(s, s1) < 0)
	{
		printf("\ns1 nho hon s2");
	}
	else
	{
		printf("\ns1 bang s2");
	}
	return 0;
}
void nhapchuoi(char s[100], char s1[100])
{
	printf("nhap ki tu chuoi s1 : ");
	gets(s);
	printf("nhap ki tu chuoi s2 : ");
	gets(s1);
}
void xuatchuoi(char s[100], char s1[100])
{
	printf("-------------------");
	printf("\nchuoi s1 vua nhap la: %s", s);
	printf("\nchuoi s2 vua nhap la: %s", s1);
}
