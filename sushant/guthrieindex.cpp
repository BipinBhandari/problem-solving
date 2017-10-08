#include <iostream>
#include<math.h>
using namespace std;

int guthrieIndex(int n){
	int index = 0;
	int prevNum = n;
	while(prevNum != 1){
		int nextNum ;
		if(prevNum  % 2 == 0){
			nextNum = prevNum / 2;	
		} else {
			nextNum =  prevNum * 3 + 1;
		}
		index++;
		prevNum = nextNum;
	}
	return index;
}


int main() 
{
	int result;		
	int n = 42;
	result = guthrieIndex(n);
	cout << "Answer : "<< result;
	return 0;
}
