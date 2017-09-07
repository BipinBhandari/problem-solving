#include <iostream>
#include<math.h>
using namespace std;

 int isCountSpecificNumber(int a[ ], int len, int n){
 	int count=0;
 	for(int i=0; i<len; i++){
 		if(a[i]==n){
 			count++;
 		}
 	}
 	return count;
 }

 int stantonMeasure(int a[ ], int len){
 	int countOnes=0,countStanton;
 	if(len < 1){
 		return 0;
 	}

 	countOnes = isCountSpecificNumber(a, len, 1);
 	if(countOnes != 0){
 		countStanton = isCountSpecificNumber(a, len, countOnes);
 	}
 	
 	return countStanton;
 }



int main() 
{
  int result;		
  int a[] = {3, 1, 1, 4}; 
  int len = sizeof(a)/sizeof(*a);
  result = stantonMeasure(a, len);
  cout << "Answer : "<< result;
  return 0;
}
