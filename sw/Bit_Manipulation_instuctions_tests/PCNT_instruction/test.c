
int test(int a) {

	int rd;

	asm	( " pcnt %0,%1;"
	    :  "=r" (rd)
	    :   "r" (a)
	);
return rd;

}


