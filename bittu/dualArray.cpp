#include <iostream>
#include<math.h>
using namespace std;

int dualArray( int a[], int len){
	int dualCount;
	for(int i=0; i<len; i++){
		dualCount = 0;
		for(int j=0; j<len; j++){
			if(a[i] == a[j])
				dualCount++;
		}
		if(dualCount != 2){
			return false;
		}
	}
	return true;
}

int main() 
{
  int result;		
  int a[] = {1, 2, 1, 3, 3, 2}; 
  int len = sizeof(a)/sizeof(*a);
  result = dualArray(a, len);
  cout << "Answer : "<< result;
  return 0;
}