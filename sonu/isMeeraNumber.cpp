#include <iostream>
#include<math.h>
using namespace std;

int isMeeraNumber(int n){
	int count = 0;
	for(int i=2; i <= n/2; i++){
		if(n%i == 0){
			count++;
		}
	}

	if(n%count==0){
		return 1;
	}

	return 0;
}

int main() 
{
  int result;		
  result = isMeeraNumber(30);
  cout << "Answer : "<< result;
  return 0;
}