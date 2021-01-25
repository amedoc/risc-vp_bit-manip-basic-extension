
int verification (int a,  int b) {

	int rd;

	asm	( " not %1,%1;"
	    :  "=r" (rd)
	    :   "r" (b)
	);

	asm	( " and %0,%1,%2;"
	    :  "=r" (rd)
	    :   "r" (rd),"r" (b)
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


