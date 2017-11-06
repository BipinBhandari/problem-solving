isFibonacci(int n){
	int a = 0; b =1;
	if(n == a || n == b) {
	  return true
	}
	while(b > n) {
		nextNumber = a + b;
		if(n == nextNumber) {
			return true;
		}
		a = b;
		b = nextNumber;
	}
	return false;

}