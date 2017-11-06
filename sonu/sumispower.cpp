#include <iostream>
#include<math.h>
using namespace std;

bool sumIsPower( int a[], int len){
	int sum =0,powerSum=1;
	for(int i=0; i < len ; i++) {
		sum += a[i];
	}

	if(sum == 0){
		retun 0;
	}

	while(sum >= powerSum){
		if(sum == powerSum){
			return 1;
		}
		powerSum = 2 * powerSum;
	}
	return 0;
}

int main() 
{
  int result;		
  int a[] = {0,2}; 
  int len = sizeof(a)/sizeof(*a);
  result = sumIsPower(a, len);
  cout << "Answer : "<< result;
  return 0;
}