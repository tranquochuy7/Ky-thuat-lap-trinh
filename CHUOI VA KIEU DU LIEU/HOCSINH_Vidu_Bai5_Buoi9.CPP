#include <stdio.h>
#include <conio.h>
/*Viết chương trình:

- Định nghĩa kiểu HOCSINH gồm 4 thành phần: họ tên, điểm toán, điểm lý, điểm hóa

- Nhập vào thông tin của 1 học sinh

- Xuất thông tin của học sinh vừa nhập ra màn hình gồm: họ tên, điểm toán, điểm lý, điểm hóa

- Tính điểm trung bình của học sinh vừa nhập và xuất kết quả tính được ra màn hình*/
// Dinh nghia kieu cau truc HOCSINH
typedef struct HOCSINH
{
   char hoten[30];
   float toan, ly, hoa;
};

// Khai bao ham
void nhaphs(HOCSINH &p);
void xuaths(HOCSINH p);

// Ham main
int main()
{

   HOCSINH h;

   nhaphs(h);
   xuaths(h);

   float dtb = (h.toan + h.ly + h.hoa) / 3;
   printf("\nDiem tb cua hoc sinh = %.2f", dtb);

   return 0;
}

// Dinh nghia ham
void nhaphs(HOCSINH &p)
{
   float tam;
   printf("\n\n-----Nhap thong tin hoc sinh----\n");
   fflush(stdin); // xoa du lieu rac trong vung dem
   printf("Nhap ho ten:");
   gets(p.hoten);

   printf("Nhap diem toan:");
   scanf("%f", &tam);
   p.toan = tam;
   printf("Nhap diem ly:");
   scanf("%f", &tam);
   p.ly = tam;
   printf("Nhap diem hoa:");
   scanf("%f", &tam);
   p.hoa = tam;
}

void xuaths(HOCSINH p)
{
   printf("\n\n----Xuat Thong tin hoc sinh:---\n");
   printf("\nHo ten: %s", p.hoten);
   printf("\nDiem toan = %.2f", p.toan);
   printf("\nDiem ly = %.2f", p.ly);
   printf("\nDiem hoa = %.2f", p.hoa);
}
