#include <iostream>
#include<math.h>
using namespace std;
bool isPrime(int n)
{

	if (n < 2){
		return false;
	}

	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int findPorcupineNumber( int n){
	int nextEnd9 = 9 - ((n + 1) % 10) + (n + 1);
	while(true){
		if(isPrime(nextEnd9)){
			int nextNum = nextEnd9;
			while(true){
				nextNum++;
				if(isPrime(nextNum)){
					if(nextNum % 10 == 9){
						return nextEnd9;
					} else {
						break;
					}
				} 
			}
		}	
		nextEnd9 += 10;
	}	
}

int main() 
{
	int result;		
	result = findPorcupineNumber(139);
	cout << "\033[1;31mAnswer : "<< result << "\033[0m\n";
	return 0;
}

