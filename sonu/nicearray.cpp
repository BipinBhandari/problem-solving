#include <iostream>
#include<math.h>
using namespace std;

int isNice( int a[], int len){
	bool checkNiceFlag =false;
	for(int i=0; i<len; i++){
		checkNiceFlag =false;
		for(int j=0; j <len; j++){
			if((a[i]==a[j]-1) || (a[i]==a[j]+1)){
				checkNiceFlag = true;
				break;
			}
		}
		if(!checkNiceFlag){
			return 0;
		}
	}
	
	return 1;
}

int main() 
{
  int result;		
  int a[] = {3, 4,5, 7}; 
  int len = sizeof(a)/sizeof(*a);
  result = isNice(a, len);
  cout << "Answer : "<< result;
  return 0;
}