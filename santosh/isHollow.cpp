//
//  main.cpp
//  IsHollow
//
//  Created by Santosh Raj Bista on 11/9/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>

using namespace std;

int isHollow(int a[], int length) {
    
    int totalZeros = 0;
    int totalItemsBeforeZero = 0;
    int totalItemsAfterZero = 0;
    
    bool isZeroFound = false;
    
    for (int i = 0; i < length; i++) {
        int checkDigit = a[i];
        if (checkDigit == 0) {
            isZeroFound = true;
            totalZeros +=1;
        }
        else {
            if (isZeroFound) {
                totalItemsAfterZero +=1;
            }
            else {
                totalItemsBeforeZero +=1;
            }
        }
    }
    
    if ((totalZeros == totalItemsBeforeZero) && (totalZeros == totalItemsAfterZero)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(int argc, const char * argv[]) {
    int a[] = {1,2,4,9, 0,0,0,3,4, 5};
    int length = sizeof(a)/sizeof(*a);
    int result = isHollow(a, length);
    cout << result << endl;
    return 0;
}
