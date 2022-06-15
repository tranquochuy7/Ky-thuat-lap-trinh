#include<stdio.h>
#include<conio.h>
#include<math.h>
int tinhtong(int n);
int main(){
    int n;
    do{
        printf("nhap n: ");
        scanf("%d",&n);
    }while(n<=0);
    tinhtong(n);
    return 0;
}
int tinhtong(int n){
    int tong = 0;
    for(int i = 1;i<=n; i++){
        if(i%2==0){
            tong += i;
        }
    }
    printf("tong chan 1 den %d la : %d",n,tong);
}