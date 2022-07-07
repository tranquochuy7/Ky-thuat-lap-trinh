#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	float thuong;
	FILE *f1,*f2;
	f1 = fopen("Bai2.inp", "rt");
	if(f1==NULL){
		printf("khong mo dk tap tin");
	}else{
		printf("Mo tap tin thanh cong");
		fscanf(f1,"%d",&n);
		int dem = 0;
		for(int i = 1; i<= n; i++){
			if(i%2==0 && i%3==0){
				dem++;
			}
		}
		int tong = 0;
		for(int i = 1; i<= n; i++){
			if(i%2!=0){
				tong += i;
			}
		}
		
		f2 = fopen("Bai2.out", "wt");
		fprintf(f2, "\nCo %d la so chan va chia het cho 3", dem);
		fprintf(f2, "\nTong so le tu 1 den %d la: %d",n,tong);
		fclose(f1);
		fclose(f2);
				
	}
	return 0;
}

