#include <stdio.h>
#include <conio.h>
#include <math.h>
typedef struct PHANSO
{
    int tuso;
    int mauso;
};

void nhapps(PHANSO &p);
void xuatps(PHANSO p);
int main()
{
    PHANSO p1, p2;
    PHANSO tich, tong, hieu, thuong;

    // Nhap phan so p1
    printf("\nNhap phan so thu 1:\n");
    nhapps(p1);
    // Xuat phan so p1
    xuatps(p1);

    // Nhap phan so p2
    printf("\nNhap phan so thu 2:\n");
    nhapps(p2);
    // Xuat phan so p2
    xuatps(p2);
    tong.tuso = p1.tuso * p2.mauso + p1.mauso * p2.tuso;
    tong.mauso = p1.mauso * p2.mauso;
    printf("\nPhan so tong:");
    xuatps(tong);
    if (p1.mauso > p2.mauso)
    {
        printf("\nPhan so 1 lon hon ps 2");
    }
    else
    {
        printf("\nPhan so 1 nho hon ps 2");
    }
}
void nhapps(PHANSO &p)
{
    printf("Nhap tu so:");
    scanf("%d", &p.tuso);
    printf("Nhap mau so:");
    scanf("%d", &p.mauso);
}

void xuatps(PHANSO p)
{
    printf("%d/%d", p.tuso, p.mauso);
}
