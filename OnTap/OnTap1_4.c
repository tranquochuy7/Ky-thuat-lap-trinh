#include <stdio.h>
#include <conio.h>
int main(){
    int n;
    int tong = 0;
    int a[100];
    FILE *f1,*f2;
    f1 = fopen("Ontap1Cau4.inp","rt");
    if(f1==NULL){
        printf("loi k moi dk tap tin");
    }else{
        fscanf(f1,"%d",&n);
        for(int i = 0; i<n; i++){
            fscanf(f1,"%d",a[i]);
        }
        for(int i = 0; i<n; i++){
            tong =  tong+a[i];
        }
        f2 = fopen("xuatfile.out","wt");
        fprintf(f2,"mang 1 chiu la: ");
        for(int i = 0; i<n ; i++){
            fprintf(f2,"%3d",a[i]);
        }
        fprintf(f2,"tong = %d",tong);
        fclose(f1);
        fclose(f2);
    }
    return 0;
}