#include "stdio.h"
#include <stdbool.h>


extern int test(int,int  );

int a;
int b;

bool value = true; 

int main( int argc, char **argv) {

	printf("\n\n");

	int a=0x00000000;
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",a,a,test(a,a));
	
	int b=0x0000000f;
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",b,a,test(b,a));
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",a,b,test(a,b));

    	int c=0x01001111;
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",a,c,test(a,c));


	int d=0x00010000;
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",a,d,test(a,d));

	int e=0x123;
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",a,e,test(a,e));

	int f=0x12300000;
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",e,f,test(e,f));
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",f,e,test(f,e));

	int g= 0xffffffff;
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",a,g,test(a,g));
	

	int k=0x11111111;
	printf("SBSET (0x%08x, 0x%08x) = 0x%08x \n",a,k,test(a,k));



	while (value == true){
		printf("\n\n");
		printf("enter a 32 bit register value in hexadecimal : \n");
		scanf ("%08x",&a);
		printf("enter a 32 bit register value in hexadecimal : \n");
		scanf ("%08x",&b);
		printf("SBSET (0x%08x , 0x%08x)= 0x%08x \n",a,b,test(a,b));
	
	}


return 0;

}

