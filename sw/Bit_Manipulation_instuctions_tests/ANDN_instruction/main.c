#include "stdio.h"



extern int test( int a,  int b);
extern int verification ( int a , int b);


int main( int argc, char **argv) {

	printf("\n\n");

	int a=0x00000000;
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",a,a,test(a,a));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",a,a,verification(a,a));


	int b=0x0000000f;
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",a,b,test(a,b));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",a,b,verification(a,b));

	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",b,a,test(b,a));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",b,a,verification(b,a));	

    	int c=0x00001111;
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",a,c,test(a,c));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",a,c,verification(a,c));
	
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",c,a,test(c,a));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",c,a,verification(c,a));

	int d=0x00000001;
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",d,b,test(d,b));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",d,b,verification(d,b));

	int e=0x123;
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",e,a,test(e,a));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",e,a,verification(e,a));

	int f=0x12300000;
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",f,b,test(f,b));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",f,b,verification(f,b));

	int g= 0xffffffff;
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",g,g,test(g,g));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",g,g,verification(g,g));

	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",a,g,test(a,g));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",a,g,verification(a,g));
    	
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",g,a,test(g,a));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",g,a,verification(g,a));

	int k=0x11111111;
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",k,b,test(k,b));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n",k,b,verification(k,b));
	
	int s= 0x74B0DC51;
    	int r= 0x19495CFF;
	printf("ANDN (0x%08x,    0x%08x) = 0x%08x \n",s,r,test(s,r));
	printf("AND  (0x%08x,NOT 0x%08x) = 0x%08x \n\n ",s,r,verification(s,r));
	
return 0;

}
	

