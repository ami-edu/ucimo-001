int nzd(int a, int b) {
	if (a == 0) 
        return b; 
    return nzd(b % a, a); 
}
