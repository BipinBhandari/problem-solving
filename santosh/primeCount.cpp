//
//  main.cpp
//  PrimeCount
//
//  Created by Santosh Raj Bista on 8/31/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>

using namespace std;

bool checkIfPrime(int n) {
    
    if (n <= 1) {
        return false;
    }
    bool isPrime = true;
    
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    return isPrime;
}

int primeCount(int start, int end) {
    int totalPrime = 0;
    
    for (int i = start; i<= end; i++) {
        bool isPrime = checkIfPrime(i);
        if (isPrime) {
            totalPrime += 1;
        }
    }
    
    return totalPrime;
}

int main(int argc, const char * argv[]) {
    int start, end, totalPrime;
    
    cout << "Enter the Starting Number" << endl;
    cin >> start;
    
    cout << "Enter the Starting Number" << endl;
    cin >> end;
    
    totalPrime = primeCount(start, end);
    cout << totalPrime << endl;
}
