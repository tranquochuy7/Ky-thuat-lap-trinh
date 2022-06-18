#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
int tongchan(int a[], int n);
void tangdan(int a[], int n);
int shh( int n);
int main(){
    int n;
    do{
    printf("nhap n:");
    scanf("%d", &n);
    }while(n<0);
    int a[n];
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\ntong chan la: %d",tongchan(a,n));
    printf("\ncac so hoan hao trong mang la: ");
    for(int i = 0; i<n; i++){
        if(shh(a[i])){
            printf("%d ", a[i]);
        }
    }
    printf("\nmang da sap xep la:");
    tangdan(a,n);
    return 0;
}
void nhapmang(int a[],int n){
    for(int i = 0; i<n; i++){
        printf(" nha phan tu thu a[%d] :",i+1);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[], int n){
    for(int i = 0 ; i<n; i++){
        printf("%d ",a[i]);
    }
}
int tongchan(int a[], int n)
{
    int tong = 0;
    for(int i = 0; i<n ; i++){
        if(a[i]%2==0){
            tong +=a[i];
        }
    }
    return tong;
}
int shh(int n){
    int tonguoc = 0;
    for(int i = 1; i<n; i++)
    {
        if(n%i==0){
            tonguoc += i;
        }
    }
    if(tonguoc==n){
        return 1;
    }else{
        return 0;
    }
}
void tangdan(int a[], int n){
    int tam = 0;
    for(int i = 0 ; i<n; i++){
        for(int j = i+ 1; j<n; j++){
            if(a[i]>a[j]){
                tam = a[i];
                a[i] = a[j];
                a[j]= tam;
            }
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
}