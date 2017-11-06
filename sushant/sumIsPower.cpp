#include <iostream>
#include<math.h>
using namespace std;

int sumIsPower(int a[], int len){
	if(len == 0) return 0;
	int sumPower = 0;
	for(int i = 0; i < len; i++){
		sumPower += a[i];
	}

	while(sumPower != 1){
		if(sumPower % 2 == 0) sumPower /= 2;
		else return 0;
	}
	return 1;
}

int main() 
{
	int result;		
	int a[] = {8, 8, 8, 4};
  	int len = sizeof(a)/sizeof(*a);
	
	result = sumIsPower(a, len);
	cout << "Answer : "<< result;
	return 0;
}
