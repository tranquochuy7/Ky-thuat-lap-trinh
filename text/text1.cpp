#include<stdio.h>
#include<conio.h>
void hoanvi(int *x, int *y);
int main(){
    int a,b;
    a = 4, b = 5;
    hoanvi(&a,&b);
    printf("\nnhap a= %d",a);
    printf("\nnhap B= %d",b);
    return 0;

}
void hoanvi(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y= temp;
}