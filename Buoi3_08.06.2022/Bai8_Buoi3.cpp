#include<stdio.h>
#include<conio.h>
#include<math.h>
/*Khai bao ham*/
int  KiemtraSHH(int n);

int main()
{
	int n, kq=0;
	
	printf("Nhap n =");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n =");
		scanf("%d", &n);
	}

	kq=KiemtraSHH(n); 
	if(kq==1){
		printf("%d la so hoan hao",n);	
	}
	else{
		printf("%d khong phai la so hoan hao",n);
	}
	return 0;
}

/*Dinh nghia ham*/
int  KiemtraSHH(int n)
{	
	int kthh =0;
	for(int i = 1;i<=n/2; i++){
		if(n%i==0){
			kthh+=i;
		}		
	}	
	if(kthh==n) return 1;
}

