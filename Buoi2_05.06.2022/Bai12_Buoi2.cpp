#include<stdio.h>
#include<conio.h>

int main () {
	int a;
	printf("Nhap canh a = ");
	scanf("%d", &a);
	

	for(int i = 0; i < a; i++) {
		printf("\n");
		for(int j = 0; j <= i; j++) {
			printf("* ");
		}
	}

	printf("\n \n");
	for(int i = 0; i < a; i++) {
		
		for (int k = i + 1; k < a; k++) {
			printf("  ");
		}
		
		for(int j = 0; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	printf("\n \n");


	for (int i = 0; i < a; i++) {
	
		printf("\n");
		for (int j = 0; j < i; j++) {
			printf("  ");
		}

		for (int k = i; k < a; k++) {
			printf("* ");
		}
	}



	printf("\n \n");
	for (int i = 0; i < a; i++) {
		printf("\n");
		for (int j = i; j < a; j++) {
			printf("* ");
		}
	}
	

	return 0;
}
