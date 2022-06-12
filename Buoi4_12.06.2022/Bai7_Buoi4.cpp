#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
void timx(int a[], int n, int x);

int main(){
	int i, n,x;
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	int a[n];
	nhapmang(a,n);
	xuatmang(a,n);
	printf("\nnhap x: ");
	scanf("%d",&x);
	timx(a,n,x);
	
}
void nhapmang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%3d",a[i]);
	}
}
void timx(int a[], int n, int x){
	for(int i=0;i<n;i++)
	{
		if(x==a[i]){
			printf("x co trong mang vi tri: %d",i+1);
		}
	}
	printf("k tim thay");
}
