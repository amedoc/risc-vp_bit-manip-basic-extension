
int verification (int a,  int b) {

	int rd;

	asm	( " not %1,%1;"
	    :  "=r" (rd)
	    :   "r" (b)
	);

	asm	( " xor %0,%1,%2;"
	    :  "=r" (rd)
	    :   "r" (rd),"r" (b)
	);


return rd;


}


