//
//  main.cpp
//  Good Spread
//
//  Created by Santosh Raj Bista on 11/10/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>
using namespace std;

int goodSpread(int a[], int length) {
    
    bool isGoodSpread = true;
    
    for (int i = 0; i < length; i++) {
        int checkDigit = a[i];
        int totalCount = 1;
        
        for (int j = i+1; j < length-i; j++) {
            int tempDigit = a[j];
            
            if (checkDigit == tempDigit) {
                totalCount += 1;
            }
        }
        
        if (totalCount > 3) {
            isGoodSpread = false;
            break;
        }
    }
    
    if (isGoodSpread) {
        return 1;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    int a[] = {2, 1, 2, 5, 2, 1, 5, 9};
    int length = sizeof(a)/sizeof(*a);
    int result = goodSpread(a, length);
    cout << result << endl;
    return 0;
}
