
int test(int a) {

	int rd;

	asm	( " clz %0,%1;"
	    :  "=r" (rd)
	    :   "r" (a)
	);
return rd;

}


