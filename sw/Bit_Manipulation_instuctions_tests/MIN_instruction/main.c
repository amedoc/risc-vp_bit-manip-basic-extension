#include "stdio.h"
#include <stdbool.h>


extern int test(  );

int a;
int b;

bool value = true; 

int main( int argc, char **argv) {



	while (value == true){
		printf("\n\n");
		printf("enter a 32 bit register value in hexadecimal : \n");
		scanf ("%08x",&a);
		printf("enter a 32 bit register value in hexadecimal : \n");
		scanf ("%08x",&b);
		printf("MIN (0x%08x , 0x%08x)= 0x%08x \n",a,b,test(a,b));
		if (test(a,b) != (a<b ? a:b)) { 
			value = false;
		}
	
	}


	
return 0;

}

