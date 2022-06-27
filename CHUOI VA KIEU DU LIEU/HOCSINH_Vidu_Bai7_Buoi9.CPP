#include <stdio.h>
#include <conio.h>
/*Yêu cầu:

- Lưu Bai6_Buoi9.cpp thành Bai7_Buoi9.cpp. Sửa chương trình cho phép:

- Định nghĩa kiểu HOCSINH gồm 4 thành phần: họ tên, điểm toán, điểm lý, điểm hóa

- Nhập vào 1 số nguyên dương n (n>0). Nếu sai yêu cầu nhập lại

- Nhập vào thông tin của n học sinh. Thông tin mỗi học sinh nhập vào gồm: họ tên, điểm toán, điểm lý, điểm hóa

- Xuất thông tin của n học sinh vừa nhập ra màn hình gồm: họ tên, điểm toán, điểm lý, điểm hóa, điểm trung bình

- Hãy tìm học sinh có điểm trung bình lớn nhất*/
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

   // Nhap vao n hoc sinh
   HOCSINH h[100];
   int n, i;

   do
   {
      printf("\nNhap so hoc sinh:");
      scanf("%d", &n);
      if (n <= 0)
         printf("\nNhap lai n>0");
   } while (n <= 0);

   for (i = 0; i < n; i++)
   {
      nhaphs(h[i]);
   }

   for (i = 0; i < n; i++)
   {
      xuaths(h[i]);
   }

   // Tim hs co dtb lon nhat
   float maxdtb = (h[0].toan + h[0].ly + h[0].hoa) / 3;

   for (i = 0; i < n; i++)
   {
      if ((h[i].toan + h[i].ly + h[i].hoa) / 3 > maxdtb)
      {
         maxdtb = (h[i].toan + h[i].ly + h[i].hoa) / 3;
      }
   }

   printf("\nMax dtb=%.2f", maxdtb);
   printf("\n\n----------HOC SINH CO DIEM TRUNG BINH LON NHAT-------------------------------");
   printf("\nDanh sach hoc sinh:");
   for (i = 0; i < n; i++)
   {
      float dtb_hsi = (h[i].toan + h[i].ly + h[i].hoa) / 3;
      if (dtb_hsi == maxdtb)
         xuaths(h[i]);
   }

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
   float dtb;
   dtb = (p.toan + p.ly + p.hoa) / 3;
   printf("\nDiem trung binh = %.2f", dtb);
}
