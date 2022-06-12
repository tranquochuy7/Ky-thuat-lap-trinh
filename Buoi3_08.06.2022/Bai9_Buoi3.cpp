#include<stdio.h>
#include<conio.h>
#include<math.h>
/*Khai bao ham*/
int  KiemtraSDX(int n);

int main()
{
	int n, kq=0;
	
	printf("Nhap n =");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n =");
		scanf("%d", &n);
	}

	kq=KiemtraSDX(n); 
	if(kq==1){
		printf("%d la so doi xung",n);	
	}
	else{
		printf("%d khong phai la so doi xung",n);
	}
	return 0;
}

/*Dinh nghia ham*/
/*tim so dao nguoc*/
int sodaognuoc(int n){
	int dn=0;
	while(n>0){
		dn = dn*10+n%10;
		n/=10;	
	}
	return dn;
}
/* kiem tra so doi xung*/
int  KiemtraSDX(int n)
{	
	int dx =0;
	if(sodaognuoc(n)==n) return 1;
	
	
}

