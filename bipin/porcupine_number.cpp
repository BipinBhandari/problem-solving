#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n){
    for (int i = 2; i < n; ++i){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    while (true){
        n = n+1;
        if (isPrime(n)){
            return n;
        }
    }
}

bool endsWith9(int n){
    return n%10 == 9;
}

int findPorcupineNumber(int n) {
    while (true){
        n = n + 1;
        
        if (isPrime(n) && endsWith9(n)){
            int next = nextPrime(n);
            if (endsWith9(next)) return n;
        }
    }
}

int main() {
  int n = 145;
  int ans = findPorcupineNumber(n);
  cout << "Ans is : " << ans << endl;
}