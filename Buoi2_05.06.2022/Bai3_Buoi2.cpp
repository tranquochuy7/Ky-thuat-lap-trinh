
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i;
	float x;
	double kq=1;
	
		printf("Nhap so n= ");
		scanf("%d", &n);
		printf("Nhap so thuc x= ");
		scanf("%f", &x);
	while(n<=0){
			printf("Nhap lai so n=");
			scanf("%d", &n);
		}
	for(int i = 1 ; i<= n;i++){
		kq=kq*x;
	}	
	printf("kq: %lf",kq);
	return 0;
}
