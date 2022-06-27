#include <stdio.h>
#include <conio.h>
#include <string.h>
/*Viết chương trình cho phép:

- Nhập vào 1 chuỗi ký tự (có khoảng trắng)

- Xuất chuỗi vừa nhập ra màn hình

- Cho biết chuỗi vừa nhập có bao nhiêu ký tự

- Chuyển các ký tự của chuỗi vừa nhập sang chữ IN HOA. Xuất chuỗi sau khi chuyển

- Lưu bài với tên Bai1_Buoi9.cpp và nộp lên hệ thống*/
void nhapchuoi(char n[100]);
void xuatchuoi(char n[100]);
int demsokytu(char n[100]);
int chuyeninhoa(char n[100]);
int main()
{
	char n[100];
	nhapchuoi(n);
	xuatchuoi(n);
	printf("\nso ki tu trong chuoi la: %d", demsokytu(n));
	chuyeninhoa(n);
	return 0;
}
void nhapchuoi(char n[100])
{
	printf("nhap ki tu : ");
	gets(n);
}
void xuatchuoi(char n[100])
{
	printf("chuoi vua nhap la: %s", n);
}
int demsokytu(char n[100])
{
	return strlen(n);
}
int chuyeninhoa(char n[100])
{
	for (int i = 0; i < strlen(n); i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] -= 32;
		}
	}
	printf("\nchuoi da in hoa: %s", n);
}
