#include <stdio.h>
#include <conio.h>

/*
- Dinh nghia kieu PHANSO gom 2 thanh phan: tu so, mau so
- Nhap vao hai phan so ps1, ps2
- Xuat hai phan so vua nhap ra man hinh dang: tu so/mau so
- Tinh tong ps1, ps2. Xuat cac phan so tinh duoc ra man hinh dang: tu so/mau so
- Hay so sanh hai phan so ps1, ps2
*/

typedef struct PHANSO
{
    int tuso, mauso;
} ps;

void nhapps(ps &p)
{
    printf("\nNhap tu so: ");
    scanf("%d", &p.tuso);

    printf("Nhap mau so: ");
    scanf("%d", &p.mauso);
}

void xuatps(ps p)
{
    printf("%d/%d", p.tuso, p.mauso);
}

int SoSanhPS(ps a, ps b)
{
    float p1 = (float)a.tuso / (float)a.mauso;
    float p2 = (float)b.tuso / (float)b.mauso;

    if (p1 < p2)
    {
        return 1;
    }
    else if (p1 > p2)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
    ps p1, p2;
    ps tong;

    printf("Nhap phan so thu nhat: ");
    nhapps(p1);
    xuatps(p1);

    printf("\nNhap phan so thu hai: ");
    nhapps(p2);
    xuatps(p2);

    tong.tuso = p1.tuso * p2.mauso + p1.mauso * p2.tuso;
    tong.mauso = p1.mauso * p2.mauso;
    printf("\nTong phan so = ");
    xuatps(tong);

    if (SoSanhPS(p1, p2) == 1)
    {
        printf("\np1 < p2");
    }
    else if (SoSanhPS(p1, p2) == 0)
    {
        printf("\np1 > p2");
    }
    else
    {
        printf("\np1 = p2");
    }
    return 0;
}
