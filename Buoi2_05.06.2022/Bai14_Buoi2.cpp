#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	float x,t =1, s = 0;
	printf("\nNhap x: ");
  	scanf("%f", &x);
  	printf("\nNhap n: ");
  	scanf("%d", &n);
  	for(int i=1;i<=n;i++){
	  	t=t*x;
	  	s=s+t;
	}
  	printf("\nket qua la : %.3f",s);
    return 0;
}
