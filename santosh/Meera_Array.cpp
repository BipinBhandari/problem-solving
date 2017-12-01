//
//  main.cpp
//  Meera
//
//  Created by Santosh Raj Bista on 11/10/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>
using namespace std;

int isMeera(int a[], int length) {
    int totalBeginningEven = 0;
    int totalEndingEven = 0;
    bool isOddFound = false;
    
    for (int i = 0; i < length; i++) {
        int checkDigit = a[i];
        if (checkDigit % 2 != 0) {
            isOddFound = true;
        }
        
        if (isOddFound) {
            if (checkDigit % 2 == 0) {
                totalEndingEven += 1;
            }
            else {
                totalEndingEven = 0;
            }
        }
        else {
            if (checkDigit % 2 == 0) {
                totalBeginningEven += 1;
            }
        }
    }
    
    if (totalBeginningEven == totalEndingEven) {
        return 1;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    int a[] = {2, 8, 7, 10, 5,-4, 6};
    int length = sizeof(a)/sizeof(*a);
    int result = isMeera(a, length);
    cout << result <<endl;
    return 0;
}
