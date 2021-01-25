#include "stdio.h"
#include <stdbool.h>


extern int test(int,int  );

int a;
int b;

bool value = true; 

int main( int argc, char **argv) {

	printf("\n\n");

	int a=0x00000000;
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",a,a,test(a,a));
	
	int b=0x0000000f;
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",b,a,test(b,a));
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",a,b,test(a,b));

    	int c=0x01001111;
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",c,a,test(c,a));


	int d=0x00010000;
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",a,d,test(a,d));

	int e=0x123;
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",a,e,test(a,e));

	int f=0x12300000;
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",e,f,test(e,f));
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",f,e,test(f,e));

	int g= 0xffffffff;
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",a,g,test(a,g));
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",g,a,test(g,a));
	

	int k=0x11111111;
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",a,k,test(a,k));
	printf("PACK (0x%08x, 0x%08x) = 0x%08x \n",g,k,test(g,k));


	while (value == true){
		printf("\n\n");
		printf("enter a 32 bit register value in hexadecimal : \n");
		scanf ("%08x",&a);
		printf("enter a 32 bit register value in hexadecimal : \n");
		scanf ("%08x",&b);
		printf("PACK (0x%08x , 0x%08x)= 0x%08x \n",a,b,test(a,b));
	
	}


return 0;

}

