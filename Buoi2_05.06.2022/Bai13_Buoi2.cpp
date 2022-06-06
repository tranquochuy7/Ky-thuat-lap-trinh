#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k;
    // 20 con trau dung an het 100 bo co (100/5)
    // 33 trau nam an het 100 bo co (100/3)
    // 100 con trau gia an het 100 bo co(100/1)
    for(i = 1 ; i<=20 ; i++)
    	for(j = 1; j<=33;j++)
    		for(k = 3 ; k <= 100; k++)
    			if((i+j+k==100) && (i*5+j*3+k/3==100))
    				printf("so trau: %d, so trau nam %d, so trau gia %d\n",i,j,k);

    return 0;
}
