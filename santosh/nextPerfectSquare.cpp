//
//  main.cpp
//  next_square
//
//  Created by Santosh Raj Bista on 8/28/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//


#include <iostream>
#include <cmath>

using namespace std;

int computePerfectSquareRoot(int n) {
    if (n < 0) {
        return 0;
    }
    
    if (n == 0) {
        return 1;
    }
    
    int squareRoot = sqrt(n);
    return squareRoot;
}

int computeNextPreferctSquare(int n) {
    int nextSquare = computePerfectSquareRoot(n);
    nextSquare += 1;
    return pow(nextSquare, 2);
}


int main()
{
    int n, nextPerfetctSquare;
    cout << "Enter a number to compute square\n";
    cin >> n;
    nextPerfetctSquare = computeNextPreferctSquare(n);
    cout << nextPerfetctSquare << endl;
    return 0;
}


