//
//  main.cpp
//  Bunker Array
//
//  Created by Santosh Raj Bista on 11/10/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>

int isPrime(int n) {
    bool isPrimeNumber = false;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            isPrimeNumber = true;
            break;
        }
    }
    
    if (isPrimeNumber) {
        return 1;
    }
    
    return 0;
}

int isBunker(int a[], int length) {
    bool isPrimeFound = false;
    bool isOneFound = false;
    
    for (int i = 0; i <= length; i++) {
        int checkDigit = a[i];
        if (!isPrimeFound) {
            int primeCheck = isPrime(checkDigit);
            
            if (primeCheck == 1) {
                isPrimeFound = true;
            }
        }
        
        if (checkDigit == 1) {
            isOneFound = true;
        }
        
        if (isOneFound && isPrimeFound) {
            break;
        }
    }
    
    if (isOneFound && isPrimeFound) {
        return 1;
    }
    
    return 0;
    
}

int main(int argc, const char * argv[]) {
    int a[] = {7, 6, 10, 1};
    int length = sizeof(a)/sizeof(*a);
    int result = isBunker(a, length);
    std::cout << result << std::endl;
    return 0;
}
