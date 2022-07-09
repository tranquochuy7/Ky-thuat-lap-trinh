#include<stdio.h>
#include<conio.h>
typedef struct HOCSINH
{
	char hoTen[30];
	float diemToan, diemLy, diemHoa;
} HOCSINH;

void nhapHS(HOCSINH &h);
void xuatHS(HOCSINH h);

int main()
{
	HOCSINH hs1, hs2;
	
	printf("\n----------Nhap thong tin hoc sinh---------");
	printf("\nNhap thong tin hoc sinh thu 1: ");
	nhapHS(hs1);
	
	printf("\nNhap thong tin hoc sinh thu 2: ");
	nhapHS(hs2);
	
	printf("\n\n----------Xuat thong tin hoc sinh----------");
	printf("\n---Thong tin hoc sinh thu 1: ");
	xuatHS(hs1);
	float dTB1 = (hs1.diemToan + hs1.diemLy + hs1.diemHoa)/3;
	printf("\nDiem trung binh = %.2f", dTB1);
	
	printf("\n\n---Thong tin hoc sinh thu 2: ");
	xuatHS(hs2);
	float dTB2 = (hs2.diemToan + hs2.diemLy + hs2.diemHoa)/3;
	printf("\nDiem trung binh = %.2f", dTB2);
	
	if(dTB1 > dTB2) printf("\n\nDTB hoc sinh 1 > DTB hoc sinh 2");
	else if(dTB1 < dTB2) printf("\n\nDTB hoc sinh 1 < DTB hoc sinh 2");
	else printf("\n\nDTB hoc sinh 1 = DTB hoc sinh 2");
	
	return 0;
}

void nhapHS(HOCSINH &h)
{
	float tam;
	fflush(stdin);  //xoa du lieu rac trong vung dem
	printf("\nNhap ho ten: "); gets(h.hoTen);

	printf("Nhap diem toan: ");scanf("%f", &tam); h.diemToan=tam;
	printf("Nhap diem ly: ");scanf("%f", &tam); h.diemLy=tam;
	printf("Nhap diem hoa: ");scanf("%f", &tam); h.diemHoa=tam;
}
void xuatHS(HOCSINH h)
{
   printf("\nHo ten: %s", h.hoTen);
   printf("\nDiem toan = %.2f", h.diemToan);
   printf("\nDiem ly = %.2f", h.diemLy);
   printf("\nDiem hoa = %.2f", h.diemHoa);
}

