/*
	++++++++++++++++++++++ Question ++++++++++++++++++++

	3. An array is defined to be inertial if the following conditions hold:
 a. it contains at least one odd value
 b. the maximum value in the array is even
 c. every odd value is greater than every even value that is not the maximum value. 

So {11, 4, 20, 9, 2, 8} is inertial because 
 a. it contains at least one odd value
 b. the maximum value in the array is 20 which is even
 c. the two odd values (11 and 9) are greater than all the      
    even values that are not equal to 20 (the maximum), i.e., (4, 2, 8}. 

However, {12, 11, 4, 9, 2, 3, 10} is not inertial because it fails condition (c), i.e., 10 (which is even) is greater 9 (which is odd) but 10 is not the maximum value in the array.

Write a function called isIntertial that accepts an integer array and returns 1 if the array is inertial; otherwise it returns 0. 

If you are programming in Java or C#, the function signature is 
	int isInertial(int[ ] a) 

If you are programming in C or C++, the function signature is 
	int isInertial(int a[ ], int len) where len is the number of elements in the array 

*/
#include <iostream>
#include <math.h>
using namespace std;


int checkOddVal(int a[],int minOddValue,int maxmValue,int len){
	for(int i=0; i<=len; i++){
		if(a[i] % 2 == 0 && a[i] != maxmValue && a[i] > minOddValue){
			return false;
		}
	}
	return true;
}


int isInertial( int a[], int len){
	int oddCount=0,evenCount=0,minOddValue=0;
	int maxmValue=a[0], main_max_val;
	bool isFirstCond = false,checkOddValGreater;
	for(int i=0; i<len; i++){
		if(maxmValue < a[i]){
			maxmValue = a[i];
		}

		if(a[i] % 2 == 1 || a[i] % 2 == -1){
			isFirstCond = true;
			if(minOddValue == 0){
				minOddValue = a[i];
			}

			if(minOddValue > a[i]){
				minOddValue = a[i];
			}
		}

		main_max_val = maxmValue;
	}
	
	if(isFirstCond != true || maxmValue % 2 == 1){
		return 0;
	}



	checkOddValGreater = checkOddVal(a, minOddValue, maxmValue,len);
	if(checkOddValGreater==false){
		return 0;
	}

	return 1;
}

int main() 
{
  int result;		
  int a[] = {11, 4, 20, 9, 2, 8}; 
  int len = sizeof(a)/sizeof(*a);
  result = isInertial(a, len);
  cout << "Answer : "<< result;
  return 0;
}