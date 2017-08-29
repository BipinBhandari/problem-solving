#include <iostream>
#include <math.h>

using namespace std;

int isPerfectSquare(int n){
    while(true) {
        n = n+1;
        int sqrtOfN = ceil(pow(n, 0.5));
        int squareOfSqrt = pow(sqrtOfN, 2);
        if(squareOfSqrt == n) {
            return n;
        }
    }
}

int main()
{
    int x = isPerfectSquare(10);
    cout << x;
    return 0;
}