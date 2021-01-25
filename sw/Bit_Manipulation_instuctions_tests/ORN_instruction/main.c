#include "stdio.h"



extern int orn_test( int a,  int b);
extern int verification ( int a , int b);


int main( int argc, char **argv) {

	printf("\n\n");

	int a=0x00000000;
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",a,a,orn_test(a,a));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",a,a,verification(a,a));


	int b=0x0000000f;
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",a,b,orn_test(a,b));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",a,b,verification(a,b));

	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",b,a,orn_test(b,a));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",b,a,verification(b,a));	

    	int c=0x00001111;
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",a,c,orn_test(a,c));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",a,c,verification(a,c));
	
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",c,a,orn_test(c,a));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",c,a,verification(c,a));

	int d=0x00000001;
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",d,b,orn_test(d,b));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",d,b,verification(d,b));

	int e=0x123;
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",e,a,orn_test(e,a));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",e,a,verification(e,a));

	int f=0x12300000;
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",f,b,orn_test(f,b));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",f,b,verification(f,b));

	int g= 0xffffffff;
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",g,g,orn_test(g,g));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",g,g,verification(g,g));

	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",a,g,orn_test(a,g));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",a,g,verification(a,g));
    	
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",g,a,orn_test(g,a));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",g,a,verification(g,a));

	int k=0x11111111;
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",k,b,orn_test(k,b));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",k,b,verification(k,b));
	
	int s= 0x74B0DC51;
    	int r= 0x19495CFF;
	printf("ORN (0x%08x,    0x%08x) = 0x%08x \n",s,r,orn_test(s,r));
	printf("OR  (0x%08x,NOT 0x%08x) = 0x%08x \n\n ",s,r,verification(s,r));
	
return 0;

}

