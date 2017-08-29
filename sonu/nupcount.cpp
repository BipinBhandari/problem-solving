#include <iostream>
#include<math.h>
using namespace std;

int nUpCount( int a[], int len, int n){
	int i,partial_sum,prev_partial_sum=0,upcount=0;
	for(i=0; i<len; i++){
		partial_sum = a[i] + prev_partial_sum;
		if(prev_partial_sum <= n && partial_sum > n){
			upcount++;
		}
		prev_partial_sum = partial_sum;
	}
	return upcount;
}

int main() 
{
  int result;		
  int a[] = { 2, 3, 1, -6, 8, -3,-1,2 }; 
  int len = sizeof(a)/sizeof(*a);
  result = nUpCount(a,len,5);
  cout << "Answer : "<< result;
  return 0;
}