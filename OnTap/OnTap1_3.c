#include<stdio.h>
#include<conio.h>
#include<math.h>
int ktsnt(int n);
int main(){
    int n;
    do{
        printf("nhap n: ");
        scanf("%d",&n);
    }while(n<=0);
    if(ktsnt(n)==1){
        printf("\n%d la so nt",n);
    }else{
        printf("\n%d la so nt",n);
    }

    return 0;
}
int ktsnt(int n){
    if(n<2){
        printf("khong phai la so nguyen to");
    }
    int dem= 0;
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==0){
        return 1;
    }return 0;
}