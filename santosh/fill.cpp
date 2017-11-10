//
//  main.cpp
//  Fill
//
//  Created by Santosh Raj Bista on 11/9/17.
//  Copyright © 2017 Santosh Raj Bista. All rights reserved.
//

#include <iostream>

using namespace std;

int *fill(int a[], int k, int n) {
    if (k > 0 && n > 0) {
        int *result = new int[n];
        for (int i=0; i < n; i++) {
            result[i] = a[i%k];
        }
        
        
        return result;
    }
    
    return NULL;
}

int main(int argc, const char * argv[]) {
    
    int a[] = {1,2,3,5, 9, 12,-2,-1,2,4};
    
    int *result = fill(a,10,3);
    
    for (int i = 0; i < 3; i++) {
        cout << result[i] << endl;
    }
    
    return 0;
}
