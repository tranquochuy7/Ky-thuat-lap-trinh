#include<stdio.h>
#include<conio.h>
// chương trình cho kết qua là : 4 2 17 5 6 
int main()
{
	int i;
	// Khai bao va khoi tao gia tri cho mang 1 chieu a
    int a[12] = {1,2,3,4,5,6,9,88,7,45,6,-21};
    
    // Xuat mang
    for(i=0; i<12; i++)
    {
        printf("%3d", a[i]);
    }	
		
	return 0;
}
