#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,tong,tich,hieu;
	float thuong;
	FILE *f1,*f2;
	f1 = fopen("Bai1.inp", "rt");
	if(f1==NULL){
		printf("khong mo dk tap tin");
	}else{
		printf("Mo tap tin thanh cong");
		fscanf(f1,"%d",&a);
		fscanf(f1,"%d",&b);
		
		tong = a+b;
		hieu = a-b;
		tich = a*b;
		thuong = a*1.0/b;
		
		f2 = fopen("Bai1.out", "wt");
		
		fprintf(f2, "\nTong=%d", tong);
		fprintf(f2,"\nhieu = %d",hieu);
		fprintf(f2,"\nTich = %d",tich);
		fprintf(f2,"\nThuong = %.2f",thuong);
		fclose(f1);
		fclose(f2);
				
	}
	return 0;
}

