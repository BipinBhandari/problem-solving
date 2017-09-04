#include <iostream>
#include<math.h>
using namespace std;

 int isPrime(int n){
 	bool isPrime=true;
 	for(int j= 2; j<=n/2; j++) {
 	  if(n==1){
 	  	return 1;
 	  }	

      if(n%j == 0) {
        return 0;
        break;
      }
    }
 	return 1;
 }

 int findPorcupineNumber(int n){
 	bool gotFirstProcupineNum=false;
 	int procupineNumber=0;
 	while(true){
 		n++;
 		if(isPrime(n)){
 			if(gotFirstProcupineNum==true && n%10==9){
 				return procupineNumber;
 			}else{
 				gotFirstProcupineNum = false;
 			}

 			if(n%10==9){
 				gotFirstProcupineNum = true;
 				procupineNumber = n;
 			}
 		}
 	}
 }


int main() 
{
  int result;		
  result = findPorcupineNumber(0);
  cout << "Answer : "<< result;
  return 0;
}
