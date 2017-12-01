#include <iostream>
#include<math.h>
using namespace std;

int isHollow(int a[], int len){
	int firstOccOfZero= -1;
	int lastOccOfZero = -1;
	if(len < 9) return false;
	for(int i = 0; i < len; i++){
		if(a[i] == 0 && firstOccOfZero == -1){
			If(i < 2 || i * 3 != len) return 0;
			firstOccOfZero = i;
		}

		if(a[i] == 0 && firstOccOfZero != -1){
			if(lastOccOfZero != -1 && lastOccOfZero != i - 1) return 0; 
			lastOccOfZero = i;
		}
	}

	return 1;
}

int main() 
{
	int result;		
	int a[] = {1,2,4,0,0,0,3,4,5};
  	int len = sizeof(a)/sizeof(*a);
	
	result = isHollow(a, len);
	cout << "Answer : "<< result;
	return 0;
}
