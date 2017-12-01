//
//  main.cpp
//  SumIsPower
//
//  Created by Santosh Raj Bista on 11/9/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

bool sumIspower(int a[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += a[i];
    }
    
    bool isTrue = true;
    while (sum != 1) {
        if (sum % 2 == 0) {
            sum = sum / 2;
        }
        else {
            isTrue = false;
            break;
        }
    }
    
    return isTrue;
}

int main(int argc, const char * argv[]) {
    
    int a[] = {8,8,8,8,8};
    int length = sizeof(a)/sizeof(*a);
    bool isTrue = sumIspower(a, length);
    cout << isTrue << endl;
    return 0;
}
