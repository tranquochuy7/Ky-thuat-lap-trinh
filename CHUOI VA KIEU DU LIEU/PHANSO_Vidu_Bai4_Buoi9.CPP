#include<stdio.h>
#include<conio.h>

//Dinh nghia kieu cau truc PHANSO
typedef struct PHANSO
{
   int tuso;
   int mauso;
};

//Khai bao ham
void nhapps(PHANSO &p);
void xuatps(PHANSO p);
int USCLN(int a,int b);
void Toigian(PHANSO &p);

//Ham main: chuong trinh chinh
int main()
{  
   PHANSO p1, p2;
   PHANSO tich, tong, hieu, thuong;

   //Nhap phan so p1
   printf("\nNhap phan so thu 1:\n");
   nhapps(p1);
   //Xuat phan so p1
   xuatps(p1);

   //Nhap phan so p2
   printf("\nNhap phan so thu 2:\n");
   nhapps(p2);
   //Xuat phan so p2
   xuatps(p2);

    //Tinh tong hai phan so p1, p2
   tong.tuso= p1.tuso * p2.mauso + p1.mauso*p2.tuso;
   tong.mauso=p1.mauso * p2.mauso;
   Toigian(tong);
   printf("\nPhan so tong:");
   xuatps(tong);

   //Tinh hieu hai phan so p1, p2
   hieu.tuso= p1.tuso * p2.mauso - p1.mauso*p2.tuso;
   hieu.mauso=p1.mauso * p2.mauso;
   printf("\nPhan so hieu:");
   xuatps(hieu);

   //Tinh tich hai phan so p1, p2
   tich.tuso= p1.tuso * p2.tuso;
   tich.mauso=p1.mauso * p2.mauso;
   printf("\nPhan so tich:");
   xuatps(tich);
   
   //Tinh thuong hai phan so p1, p2
   thuong.tuso= p1.tuso * p2.mauso;
   thuong.mauso=p1.mauso * p2.tuso;
   printf("\nPhan so thuong:");
   xuatps(thuong);

   //Toi gian phan so
   printf("\n\n\n----------Toi gian phan so-----------------\n");
   
   Toigian(tong);
   printf("\nPhan so tong sau khi toi gian:");
   xuatps(tong);
   
   Toigian(hieu);
   printf("\nPhan so hieu sau khi toi gian:");
   xuatps(hieu);

   Toigian(tich);
   printf("\nPhan so tich sau khi toi gian:");
   xuatps(tich);
   
   Toigian(thuong);
   printf("\nPhan so thuong sau khi toi gian:");
   xuatps(thuong);
   return 0;
}

//Dinh nghia ham
void nhapps(PHANSO &p)
{
   printf("Nhap tu so:");scanf("%d", &p.tuso);
   printf("Nhap mau so:");scanf("%d", &p.mauso);
}

void xuatps(PHANSO p)
{
   printf("%d/%d", p.tuso, p.mauso);
}

int USCLN(int a, int b)
{

    while(a!=b)
    { if(a>b) a=a-b;
      else b=b-a;
    }

    return a;
}

void Toigian(PHANSO &p)
{
    int a,b, usc;
    a=p.tuso;
    b=p.mauso;

    if(a<0) a=-a;
    if(b<0) b=-b;

    if(a==0 || b==0)
	    usc=1;
    else
	    usc=USCLN(a, b);

    p.tuso=p.tuso/usc;
    p.mauso=p.mauso/usc;

}
