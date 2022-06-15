#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int a[],int n);
void xuatmang(int a[],int n);
int tinhtich(int a[], int n);
int main(){
    int n;
    do{
        printf("nhap n: ");
        scanf("%d",&n);
    }while(n<=0);
    int a[n];
    nhapmang(a,n);
    xuatmang(a,n);
    printf("ket qua la: %d",tinhtich(a,n));
}
void nhapmang(int a[],int n){
    for(int i = 0; i<n; i++){
        printf("nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[], int n){
    for(int i = 0; i<n;i++){
        printf("%d ",a[i]);
    }
}
int tinhtich(int a[], int n){
    int kq=1;
    for(int i = 1; i<=n; i++){
        kq *= i;
    }
    return kq;
}
