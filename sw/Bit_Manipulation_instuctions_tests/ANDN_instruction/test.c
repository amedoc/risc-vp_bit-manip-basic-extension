
int test(int a,  int b) {

	int rd;

	asm	( " andn %0,%1,%2;"
	    :  "=r" (rd)
	    :   "r" (a),"r" (b)
	);
return rd;

/*
		register int rd asm ("s5");
		asm	( " andn s5,a0,a1;"
				:  "=r" (rd)
				:   "r" (a),"r" (b)
				);
		return rd;
*/
}


