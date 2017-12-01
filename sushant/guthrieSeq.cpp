#include <iostream>
#include<math.h>
using namespace std;

int isGuthrieSequence(int a[], int len){
	if(len < 2 || a[len - 1] != 1) return 0;
	int prevNumber = 1;
	for(int i = len - 2; i >= 0; i--){
		if(a[i] / 2 != prevNumber && (a[i] * 3 + 1) != prevNumber){
			return 0;
		}		
		prevNumber = a[i];
	}
	return 1;
}

int main() 
{
	int result;		
	int arr[] = {8, 4, 1};
	result = isGuthrieSequence(arr, 3);
	cout << "\033[1;31mAnswer : "<< result << "\033[0m\n";
	return 0;
}

