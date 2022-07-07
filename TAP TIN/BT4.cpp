#include<stdio.h>
#include<conio.h>
int main(){
	int n,m;
	int a[50][50];
	FILE *f1,*f2;
	f1 = fopen("Bai4.inp", "rt");
	if(f1==NULL){
		printf("khong mo dk tap tin");
	}else{
		printf("Mo tap tin thanh cong");
		fscanf(f1,"%d",&n);
		fscanf(f1,"%d",&m);
		for(int i = 0; i<n; i++){
			for(int j = 0; j<m; j++){
				fscanf(f1,"%d",&a[i][j]);
			}
			
		}
		f2 = fopen("Bai4.out", "wt");
		fprintf(f2, "\nxuat mang:");
		for(int i = 0; i<n; i++){
			fprintf(f2,"\n");
			for(int j = 0; j<m; j++){
				fprintf(f2,"%3d",a[i][j]);
			}
			
		}
		int tong = 0;
		for(int i = 0; i<n; i++){
			fprintf(f2,"\n");
			for(int j = 0; j<m; j++){
				tong  += a[i][j];
			}
			
		}
		fprintf(f2, "\ntong = %d",tong);
		fclose(f1);
		fclose(f2);
				
	}
	return 0;
}

