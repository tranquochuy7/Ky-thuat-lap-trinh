#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<iostream>
int main()
{
	double toan,ly,hoa,dtb;
	printf("Nhap diem toan:");
	scanf("%lf", &toan);
	printf("Nhap diem ly:");
	scanf("%lf", &ly);
	printf("Nhap diem hoa:");
	scanf("%lf", &hoa);

	while(toan>10||ly>10||hoa>10){
		printf("Nhap diem toan:");
		scanf("%lf", &toan);
		printf("Nhap diem ly:");
		scanf("%lf", &ly);
		printf("Nhap diem hoa:");
		scanf("%lf", &hoa);
	}
	dtb = (toan+ly+hoa)/3;
	printf("-------------------\n");
	printf("diem trung binh la: %.3lf\n",dtb);	
	if(dtb>=9)
	{
		printf("hoc xinh thuoc loai XUAT SAC");
	}else if(dtb>=8 && dtb<9){
		printf("hoc xinh thuoc loai GIOI");
	}
	else if(dtb>=6.5 && dtb<8){
		printf("hoc xinh thuoc loai KHA");	
	}
	else if(dtb>=5 && dtb<6.5){
		printf("hoc xinh thuoc loai TRUNG BINH");	
	}
	else if(dtb>=3.5 && dtb<5){
		printf("hoc xinh thuoc loai YEU");	
	}
	else if(dtb<3.5){
		printf("hoc xinh thuoc loai KEM");	
	}
	return 0;
}
