#include <iostream>
#include <math.h>

using namespace std;

int nextPerfectSquare(int n){
    do {
        n++;
        float root = sqrt(n);
        if (ceil(root) == root) return n;
    } while (true);
}

int main() {
    int n;
    cin >> n;
    cout << "Next Perfect Square is : " << nextPerfectSquare(n) << endl;
 }