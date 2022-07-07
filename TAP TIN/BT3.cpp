#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	int a[50];
	FILE *f1,*f2;
	f1 = fopen("Bai3.inp", "rt");
	if(f1==NULL){
		printf("khong mo dk tap tin");
	}else{
		printf("Mo tap tin thanh cong");
		fscanf(f1,"%d",&n);
		for(int i = 0; i<n; i++){
			fscanf(f1,"%d",&a[i]);
		}
		f2 = fopen("Bai3.out", "wt");
		fprintf(f2, "\nxuat mang:");
		for(int i = 0; i<n; i++){
			fprintf(f2,"%3d",a[i]);
		}
		int min = a[0];
		for(int i = 0; i<=n; i++){
				if(a[i]<min){
					min = a[i];
				}
		}
		fprintf(f2, "\nGia tri nho nhat la: %d",min);
		fclose(f1);
		fclose(f2);
				
	}
	return 0;
}

