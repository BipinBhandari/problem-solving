#include <iostream>
#include<math.h>
using namespace std;

 int guthrieIndex(int n){
 	int count=0;
 	if(n == 1){
 		return 0;
 	}

 	while(n!=1){
 		if(n%2==0){
 			n = n/2;
 		}else{
 			n = (n*3) + 1;
 		}
 		count++;
 	}
 	return count;
 }


int main() 
{
  int result;		
  result = guthrieIndex(3);
  cout << "Answer : "<< result;
  return 0;
}
