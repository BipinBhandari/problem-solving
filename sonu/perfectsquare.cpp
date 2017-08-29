#include <iostream>
#include<math.h>
using namespace std;

int isPerfectSquare( int n){
	do{
		n = n+1;
		float sqrt_res = sqrt(n);
		if(ceil(sqrt_res) == sqrt_res){
			return n;
		}
	}while(true);
}

int main() 
{
	int number;
    double result;
  cout << "Enter your number to check perfect square";
  cin >> number;
  result = isPerfectSquare(number);
  cout << "Answer : "<< result;
  return 0;
}