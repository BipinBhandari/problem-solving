 
#include <iostream>
#include<math.h>
using namespace std;

int minDistance(int n){
	int j = 2, minDistance=n, prevFactor=1;
	while(n>j){
		if(n%j==0){
			if(minDistance>(j-prevFactor)){
				minDistance = j-prevFactor;
			}
			prevFactor = j;
		}
		j++;
	}
	return minDistance;
}

int main() 
{
  int result;		
  result = minDistance(15);
  cout << "Answer : "<< result;
  return 0;
}