#include <iostream>
#include<math.h>
using namespace std;

int goodspread( int a[], int len){
	int countReps=0;
	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++){
			if(a[i]==a[j]){
				countReps++;
				if(countReps>3){
					return 0;
				}
			}
		}
		countReps = 0;
	}
	return 1;
}

int main() 
{
  int result;		
  int a[] = {2, 1, 2, 5, 2, 1, 5, 9}; 
  int len = sizeof(a)/sizeof(*a);
  result = goodspread(a, len);
  cout << "Answer : "<< result;
  return 0;
}