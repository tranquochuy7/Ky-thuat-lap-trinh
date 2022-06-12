#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
void dem(int a[], int n);

int main(){
	int i, n,x;
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	int a[n];
	nhapmang(a,n);
	xuatmang(a,n);
	dem(a,n);
	
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
void dem(int a[], int n){
	int dem =0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0&&a[i]%3==0){
			dem++;
		}
	}
	printf("\nco %d so la so chan chia het cho 3", dem);
}
