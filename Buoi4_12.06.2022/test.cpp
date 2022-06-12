#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
void dem(int a[], int n);

int ktSHH(int n);
int main(){
	int i, n,x;
	int a[100];
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	//int a[n];
	
	nhapmang(a,n);
	xuatmang(a,n);
	
//	dem(a,n);
//	sx(a,n);
//	
//	if(ktd(a,n)==0){
//		printf("\nmang toan duong");
//	}
//	else{
//			printf("\nmang k toan duong");
//	}
	int demsohh = 0;
	printf("\nDem so hoan hao");
	for(int i=0;i<n;i++)
	{
		if(ktSHH(a[i])==1)
		{
			demsohh++;	
		}	
	}
	printf("\nmang co %d so hoan hao", demsohh);
}
void nhapmang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%3d",a[i]);
	}
}
int ktSHH( int n){
	int kthh=0;
	for(int i = 1; i<n;i++){
		if(n%i==0){
			kthh+=i;
		}
	}
	
	if(kthh==n){
		return 1;	
	}
	else{
		return 0;
	}
}
