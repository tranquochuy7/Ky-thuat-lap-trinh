#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,uc,bc;
	
		printf("Nhap a=");
		scanf("%d", &a);
		printf("Nhap b=");
		scanf("%d", &b);
	while(a<0||b<0)
	{
		printf("Nhap lai a=");
		scanf("%d", &a);
		printf("Nhap lai b=");
		scanf("%d", &b);
	}
	for(uc=a;uc>=1;uc--){
		if(a%uc==0 && b%uc==0){
			printf("UCLN(%d,%d)=%d\n",a,b,uc);
			break;
		}
	}
	for (bc=a;bc<=a*b;bc++){
        if (bc%a==0 && bc%b==0){
            printf("BCNN(%d,%d)=%d\n",a,b,bc);
            break;
        }
    }
	return 0;	
}
