//
//  main.cpp
//  Factor Two Count
//
//  Created by Santosh Raj Bista on 11/10/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>
using namespace std;

int factorTwoCount(int factor) {
    int count = 0;
    while (factor % 2 == 0) {
        factor = factor / 2;
        count += 1;
    }
    
    return count;
}

int main(int argc, const char * argv[]) {
    int factor, factorCount;
    cout << "Enter a number" << endl;
    cin >> factor;
    factorCount = factorTwoCount(factor);
    cout << factorCount << endl;
    return 0;
}
