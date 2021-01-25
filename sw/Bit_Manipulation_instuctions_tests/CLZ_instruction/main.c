#include "stdio.h"
#include <stdbool.h>


extern int test( int a);
bool value = true; 


int main( int argc, char **argv) {

	printf("\n\n");

	int a=0x00000000;
	printf("CLZ (0x%08x) = 0x%08x \n",a,test(a));
	
	int b=0x0000000f;
	printf("CLZ (0x%08x) = 0x%08x \n",b,test(b));

    	int c=0x01001111;
	printf("CLZ (0x%08x) = 0x%08x \n",c,test(c));


	int d=0x00010000;
	printf("CLZ (0x%08x) = 0x%08x \n",d,test(d));

	int e=0x123;
	printf("CLZ (0x%08x) = 0x%08x \n",e,test(e));

	int f=0x12300000;
	printf("CLZ (0x%08x) = 0x%08x \n",f,test(f));

	int g= 0xffffffff;
	printf("CLZ (0x%08x) = 0x%08x \n",g,test(g));
	

	int k=0x11111111;
	printf("CLZ (0x%08x) = 0x%08x \n",k,test(k));


    	int r= 0x19495CFF;
	printf("CLZ (0x%08x) = 0x%08x \n",r,test(r));


	while (value == true){
		printf("\n\n");
		printf("enter a 32 bit register value in hexadecimal : \n");
		scanf ("%08x",&a);
	
		printf("CLZ (0x%08x )= 0x%08x \n",a,test(a));
	
		}
	
	
return 0;

}
	

