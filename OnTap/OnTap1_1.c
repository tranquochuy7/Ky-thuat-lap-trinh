#include <stdio.h>
#include <conio.h>
#include <math.h>
void nhapmangtran(int a[100][100],int n,int m);
void xuatmangtran(int a[100][100], int n, int m);
int soam(int a[100][100], int n, int m);
int main()
{
    
    int n,m;
    do
    {
        printf("nhap n:");
        scanf("%d", &n);
        printf("nhap m:");
        scanf("%d", &m);
    } while (n <= 0);
    int a[100][100];
    nhapmangtran(a,n,m);
    xuatmangtran(a,n,m);
    printf("\n co %d phan tu am trong mang", soam(a,n,m));
    return 0;
}
void nhapmangtran(int a[100][100],int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("nhap phan tu thu a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void xuatmangtran(int a[100][100],int n, int m)
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
int soam(int a[100][100], int n, int m){
     int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]<0){
                dem++;
            }
        }
    }
    return dem;
}