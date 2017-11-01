#include <iostream>
#include<math.h>
using namespace std;

int isMeera( int a[], int len){
	int preceedingEventCount=0;
	bool checkOddNumber=false;
	if(a[0]%2!=0){
		return 0;
	}
	for(int i=0; i<len; i++){
		if(a[i]%2 != 0){
			checkOddNumber = true;
		}

		if(!checkOddNumber){
			preceedingEventCount++;
		}

		if(checkOddNumber){
			if((i == len-preceedingEventCount-1) && a[i]%2==0){
				return 0;
			}
			if(i>=len-preceedingEventCount){
				if(a[i]%2 != 0){
					return 0;
				}
			}

		}
	}
	
	return 1;
}

int main() 
{
  int result;		
  int a[] = {4, 8, 6, 3, 2, 9, 8,11, 1, 121, 12, 12, 6}; 
  int len = sizeof(a)/sizeof(*a);
  result = isMeera(a, len);
  cout << "Answer : "<< result;
  return 0;
}