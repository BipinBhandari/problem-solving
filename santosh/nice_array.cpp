//
//  main.cpp
//  Nice Array
//
//  Created by Santosh Raj Bista on 11/10/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>

int isNice(int a[], int length) {
    if (length <= 1) {
        return 0;
    }
    bool isNiceFound = false;
    for (int i = 0; i < length; i++) {
        isNiceFound = false;
        int upCount = 0;
        int downCount = 0;
        
        if (i == 0) {
            downCount = a[1] - 1;
        }
        else if (i == length-1) {
            upCount = a[i-1] + 1;
        }
        else {
            upCount = a[i-1] - 1;
            downCount = a[i+1] + 1;
        }
        
        for (int j = 0; j < length; j++) {
            int checkDigit = a[j];
            if (checkDigit == upCount || checkDigit == downCount) {
                isNiceFound = true;
            }
        }
        
        if (!isNiceFound) {
            break;
        }
    }
    
    if (isNiceFound) {
        return 1;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    int a[] = {2,3,5};
    int length = sizeof(a)/sizeof(*a);
    int result = isNice(a, length);
    std::cout << result << std::endl;
    return 0;
}
