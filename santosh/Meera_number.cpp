//
//  main.cpp
//  Meera Number
//
//  Created by Santosh Raj Bista on 11/10/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>

int isMeera(int n) {
    int trivialCount = 0;
    for (int i = 2; i < n/2; i++) {
        if (n % i == 0) {
            trivialCount += 1;
        }
    }
    
    if (n % trivialCount == 0) {
        return 1;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    int number;
    std::cout << "Enter a number" << std::endl;
    std::cin >> number ;
    int result = isMeera(number);
    std::cout << result << std::endl;
    
    return 0;
}
