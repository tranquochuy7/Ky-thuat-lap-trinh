#include<stdio.h>
#include<conio.h>
#include<math.h>
int  ktsnt(int n);
int main()
{
	int i;
	int n;
	do{
		printf("nhap n:");
		scanf("%d",&n);
	}while(n<=0);
	int a[n];
	// nhap mang
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i+1);
		scanf("%d",&a[i]);
	}
	//xuat mang
	printf("mang vua nhap la:");
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	// kiem tra so nguyen to
	printf("\nso nguyen to la: ");
	int dem =0;
	for(i=0;i<n;i++)
	{
		if(ktsnt(a[i])==1){
			printf("%3d",a[i]);
			dem++;
		}
	}
	if(dem==0){
		printf("\nk tim thay");
	}
	return 0;
}
int ktsnt(int n){
	if(n<2)
		return 0;
	else{
		for(int i = 2;i<sqrt(n); i++)
		if(n%i==0)
			return 0;
		return 1;
	}
}
