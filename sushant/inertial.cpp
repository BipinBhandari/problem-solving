
#include <iostream>
#include<math.h>
using namespace std;

int isInertial(int a[], int len){
	int maxOdd = -9999999;
	int minOdd = 9999999;
	int firstMaxEven = -9999998;
	int secondMaxEven = -9999999;
	for(int i = 0; i < len; i++){
		if((a[i] % 2) != 0){
			if(maxOdd < a[i]){
				maxOdd = a[i];
			}
			if(minOdd >= a[i]){
				minOdd = a[i];
			}
		} else {
			if(a[i] > firstMaxEven){
				secondMaxEven = firstMaxEven;
				firstMaxEven = a[i];
			} else if(a[i] > secondMaxEven && a[i] < firstMaxEven){
				secondMaxEven = a[i];
			}


		}

	}

	if(maxOdd == -9999999 || (firstMaxEven % 2 != 0) || firstMaxEven < maxOdd || secondMaxEven > minOdd){
		return 0;
	} else {
		return 1;
	}
}

int main() 
{
	int result;		
	int a[] = {1}; 
	int len = sizeof(a)/sizeof(*a);
	result = isInertial(a, len);
	cout << "Answer : "<< result;
	return 0;
}

