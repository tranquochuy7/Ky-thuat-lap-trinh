#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i;
	
		printf("Nhap 1 so nguyen duong n=");
		scanf("%d", &n);
	if (n<2){
		printf("%d khong phai la so nguyen to",n);
	}
	int kt = 0;
	for(int i = 1; i<=n;i++){
		if(n%i==0)
		{
			kt++;
		}
	}
	if(kt==2){
		printf("%d la so nguyen to",n);
	}
	else{
		printf("%d khong phai la so nguyen to",n);
	}
	return 0;	
}
