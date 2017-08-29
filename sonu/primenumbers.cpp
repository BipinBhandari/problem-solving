#include <iostream>
#include<math.h>
using namespace std;

 int primeCount(int start, int end){
 	int prime_count = 0, i, rem, prime_check_flag=false;
 	while(start <= end){
 		for(i=2;i<=start;i++){
 			rem = start % i;
 			if(rem == 0 && start != i){
 				prime_check_flag=false;
 				break;
 			}
 			prime_check_flag=true;
 		}
 		if(prime_check_flag==true){
 			prime_count++;
 		}
 		start++;
 	}
 	return prime_count;
 }

int main() 
{
  int result;		
  result = primeCount(-10,6);
  cout << "Answer : "<< result;
  return 0;
}
