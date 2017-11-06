 
#include <iostream>
#include<math.h>
using namespace std;

int factorTwoCount(int n){
	int count = 0;
	while(n%2 == 0){
		count ++;
		n = n/2;
	}
	return count;
}

int main() 
{
  int result;		
  result = factorTwoCount(27);
  cout << "Answer : "<< result;
  return 0;
}