//
//  main.cpp
//  Even Spaced
//
//  Created by Santosh Raj Bista on 11/10/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>

int isEvenSpaced (int a[], int len)  {
    int lowest = a[0];
    int highest = a[0];
    
    for (int i = 0; i < len; i++) {
        int checkDigit = a[i];
        
        if (checkDigit < lowest) {
            lowest = checkDigit;
        }
        else if (checkDigit > highest) {
            highest = checkDigit;
        }
    }
    
    int difference = highest - lowest;
    if (difference % 2 == 0) {
        return 1;
    }
    
    return 0;
}
    

int main(int argc, const char * argv[]) {
    int a[] = {200, 10, 151, 160};
    int length = sizeof(a)/sizeof(*a);
    int result = isEvenSpaced(a, length);
    std::cout << result << std::endl;
    return 0;
}
