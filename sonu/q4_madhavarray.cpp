#include <iostream>
#include<math.h>
using namespace std;

bool isCorrectLength(int len){
	bool isCorrectLength = false;
	for(int i=1; i < len ; i++) {
		int a = i*(i+1)/2;
		if(len == a) {
			isCorrectLength = true;
			break;
		}
	}
	return isCorrectLength;
}

int isMadhavArray( int a[], int len){
	if(!isCorrectLength(len)) {
		return 0;
	}
	int count = 2, sum =0, tempCount = 0, initialVal = a[0];
	for(int i=1; i < len ; i++) {
		sum += a[i];
		tempCount++;
		if(tempCount == count) {
			if(sum != initialVal) {
				return 0;
			}
			sum=0;
			tempCount=0;
			count++;
		}
	}
	return 1;
}

int main() 
{
  int result;		
  int a[] = {-6, -3, -3, 8, -5, -4}; 
  int len = sizeof(a)/sizeof(*a);
  result = isMadhavArray(a, len);
  cout << "Answer : "<< result;
  return 0;
}