#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int a[],int n);
void xuatmang(int a[],int n);
void sapxep(int a[], int n);
int ktsotangdan(int a[], int n);
int ktSHH(int n);
int main(){
    int n;
    do{
        printf("nhap n: ");
        scanf("%d",&n);
    }while(n<=0);
    int a[n];
    nhapmang(a,n);
    xuatmang(a,n);
    //SAP XEP MANG 
    printf("\nmang da sap xep: ");
    sapxep(a,n);
    // DEM SO HOAN HAO
    int demsohh = 0;
	for(int i=0;i<n;i++)
	{
		if(ktSHH(a[i])==1)
		{
			demsohh++;	
		}	
	}
	printf("\nmang co %d so hoan hao", demsohh);
    //KIEM TRA MANG TANG DAN
    if(ktsotangdan(a,n)==1){
		printf("\nmang tang dan");
	}
	else
	{
		printf("\nmang k tang dan");
	}

}
void nhapmang(int a[],int n){
    for(int i = 0; i<n; i++){
        printf("nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[], int n){
    for(int i = 0; i<n;i++){
        printf("%d ",a[i]);
    }
}
void sapxep(int a[], int n){
    int tam = 0;
    for(int i = 0 ; i<n; i++){
        for(int j = i+1 ; j<n; j++){
            if(a[i]>a[j]){
                tam = a[i];
                a[i]=a[j];
                a[j]= tam;
            }
        }
    }
    for(int i =0; i<n;i++){
        printf("%d ",a[i]);
    }
}
int ktSHH( int n){
	int kthh=0;
	for(int i = 1; i<n;i++){
		if(n%i==0){
			kthh+=i;
		}
	}
	
	if(kthh==n){
		return 1;	
	}
	else{
		return 0;
	}
}
//HAM KT SO TANG DAN
int ktsotangdan(int a[], int n){
	int demtd = 0;
	for(int i = 0; i<n-1;i++){
		if(a[i+1]>a[i]) demtd++;
	}
	if(demtd==n-1){
		return 1;
	}
	else{
		return 0;
	}
}