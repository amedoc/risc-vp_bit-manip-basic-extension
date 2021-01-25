
int test(int a) {

	int rd;

	asm	( " ctz %0,%1;"
	    :  "=r" (rd)
	    :   "r" (a)
	);
return rd;

}


