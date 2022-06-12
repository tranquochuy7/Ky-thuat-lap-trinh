#include<stdio.h>
#include<conio.h>
#include<math.h>
/*Khai bao ham*/
int  ktsnt(int n);

int main()
{
	int n, kq=0;
	
	printf("Nhap n =");
	scanf("%d", &n);
	if(n<2){
		printf("%d khong phai la so nguyen to",n);	
		return 0;
	}

	kq=ktsnt(n); 
	if(kq==1){
		printf("%d la so nguyen to",n);	
	}
	else{
		printf("%d khong phai la so nguyen to",n);
	}
	return kq;
}

/*Dinh nghia ham*/
int  ktsnt(int n)
{	
	int kt =0;
	for(int i = 1;i<=sqrt(n); i++){
		if(n%i==0){
			kt++;
		}		
	}	
	return kt;
}

