#include <iostream>
#include<math.h>
using namespace std;

int stantonMeasure(int a[], int len){
	int* occArr  = new int[len];
	for (int i = 0; i < len; i++)
	{
		occArr[i] = 0;
	}
	for(int i = 0; i < len; i++){
		if(a[i] < len){
			occArr[a[i]] = occArr[a[i]] + 1;
		}
	}
	return occArr[occArr[1]];
}

int main() 
{
	int result;		
	int arr[] = {1, 3, 1, 1, 3, 3, 2, 3, 3, 3, 4};
	result = stantonMeasure(arr, 11);
	cout << "\033[1;31mAnswer : "<< result << "\033[0m\n";
	return 0;
}
