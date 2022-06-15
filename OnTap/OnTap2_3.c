#include<stdio.h>
#include<conio.h>
#include<math.h>
int ucln(int a, int b);
int main(){
    int a,b;
    do{
        printf("nhap a: ");
        scanf("%d",&a);
        printf("nhap b: ");
        scanf("%d",&b);
    }while(a<=0||b<=0);
    printf("uoc chung lon nhat cua %d va %d la : %d",a,b,ucln(a,b));
    printf("\nboi chung nho nhat  cua %d va %d la : %d",a,b,(a*b)/ucln(a,b));
}
int ucln(int a, int b){
    int dem;
    for(int i = 1; i<=a&&a<=b; i++){
        if(a%i==0&&b%i==0){
            dem = i;
        }
    }return dem;
}

