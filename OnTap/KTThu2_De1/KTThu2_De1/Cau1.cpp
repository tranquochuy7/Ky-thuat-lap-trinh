#include<stdio.h>
#include<conio.h>
int main(){
	int a[]={1,2,3,4,6,7,9},s =0;
	for(int i = 0; i<7; i++){
		s+=a[i];
	}
	a[0]=s;
	for(int i = 0; i<7; i++){
		printf("%2d",a[i]);
	}
	return 0;
}