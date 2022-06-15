#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
int demsochan(int a[], int n);
int main(){
    int n;
    do{
        printf("nhap n: ");
        scanf("%d",&n);
    }while(n<=0);
    int a[n];
    nhapmang(a,n);
    xuatmang(a,n);
    int dem = demsochan(a,n);
    printf("\nco %d so chan chia het cho 3",dem);
    return 0;
}
void nhapmang(int a[], int n){
    for(int i = 0; i<n; i++){
        printf("nhap a[%d] ",i+1);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[], int n){
    for(int i = 0; i<n;i++){
        printf("%d ",a[i]);
    }
}
int demsochan(int a[], int n){
    int dem =0;
    for(int i = 0 ; i<=n; i++){
        if(a[i]%2==0&&a[i]%3==0){
            dem++;
        }
    }
    return dem;
}

