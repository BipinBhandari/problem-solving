x`#include <iostream>
#include<math.h>
using namespace std;

int isHollow( int a[], int len){
	int countStartingNonZeros=0, countEndingNonZeros=0,zeroCount = 0;
	bool isMiddleNonZeroFinished = false;
	for(int i=0; i<len; i++){
		if(zeroCount == 0){
			if(a[i] != 0){
				countStartingNonZeros++;
			}else{
				zeroCount++;
			}
		}else{
			if(a[i] == 0){
				zeroCount++;
			}else{
				countEndingNonZeros++;
				if(zeroCount < 3){
					return 0;
				}
			}
		}
	}
	if(countStartingNonZeros != countEndingNonZeros){
		return 0;
	}
	return 1;
}

int main() 
{
  int result;		
  int a[] = {1,2,4,9, 0,0,0,3,4, 5,8}; 
  int len = sizeof(a)/sizeof(*a);
  result = isHollow(a, len);
  cout << "Answer : "<< result;
  return 0;
}