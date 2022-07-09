#include <stdio.h>
#include <conio.h>
#include <math.h>
void nhapmang(int a[100][100], int n, int m);
void xuatmang(int a[100][100], int n, int m);
int soam(int a[100][100], int n, int m);
int min(int a[100][100], int n, int m, int r);
int main()
{
    int n, m, r;
    do
    {
        printf("nhap n: ");
        scanf("%d", &n);
    } while (n <= 0);
    do
    {
        printf("nhap m: ");
        scanf("%d", &m);
    } while (m <= 0);
    int a[100][100];
    nhapmang(a, n, m);
    xuatmang(a, n, m);
    printf("\nphan co %d so am trong mang", soam(a, n, m));
    do
    {
        printf("nhap r: ");
        scanf("%d", &r);
    } while (r < 0 || r >= m);

    int min = a[r][0];
    for (int j = 0; j < m; j++)
    {
        if (a[r][j] < min)
        {
            min = a[r][j];
        }
    }
    printf("\nso ho nhat tren dong r: %d", min);

    return 0;
}
void nhapmang(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void xuatmang(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%3d", a[i][j]);
        }
    }
}
int soam(int a[100][100], int n, int m)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < 0)
            {
                dem++;
            }
        }
    }
    return dem;
}
