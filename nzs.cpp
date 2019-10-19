int nzs(int a, int b, int c) {
	c=1;
	
	while ((c % a != 0) || (c % b != 0)){
		c++;
	}
	
	return c;
}
