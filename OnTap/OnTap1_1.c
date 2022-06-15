#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int d, r;
    printf("nhap chieu dai: ");
    scanf("%d",&d);
    printf("nhap chieu rong: ");
    scanf("%d",&r);
    printf("\nchu vi hinh chu nhat la: %d",(d+r)*2);
    printf("\nDien tich hinh chu nhat la: %d",d*r);
    return 0;
}