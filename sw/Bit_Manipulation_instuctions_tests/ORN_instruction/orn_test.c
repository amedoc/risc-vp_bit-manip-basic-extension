
int orn_test(int a,  int b) {

	int rd;


	asm	( " orn %0,%1,%2;"
	    :  "=r" (rd)
	    :   "r" (a),"r" (b)
	);


return rd;



}


