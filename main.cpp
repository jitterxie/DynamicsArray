//
//  main.cpp
//  Dynamics Array
//
//  Created by Taihong Xie on 3/23/20.
//  Copyright © 2020 Taihong Xie. All rights reserved.
//
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "Header.h"
int main() {
    float a=0;
    ArrayClass M;
    M.store(2.323);
    M.store(2.123);
    a= M.maxValue();
    cout << a << endl;;
}
