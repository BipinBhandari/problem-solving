#include <iostream>
#include<math.h>
using namespace std;

int sumFactor(int a[], int len){
	int sum = 0;
	int occ = 0;
	for (int i = 0; i < len; i++)
	{
		sum += a[i];
	}
	for(int i = 0; i < len; i++){
		if(a[i] == sum){
			occ++;
		}
	}
	return occ;
}

int main() 
{
	int result;		
	int arr[] = {0, 0, 0};
	result = sumFactor(arr, 3);
	cout << "\033[1;31mAnswer : "<< result << "\033[0m\n";
	return 0;
}
