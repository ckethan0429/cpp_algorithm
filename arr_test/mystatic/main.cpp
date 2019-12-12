//
//  main.cpp
//  mystatic
//
//  Created by mac_ck on 2019/11/03.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
#include "Constant.hpp"

extern int a;

using namespace std;

int main(int argc, const char * argv[]) {
    cout << a << endl;
    cout << "in main.cpp " << Constants::pi <<" "<< &Constants::pi <<   endl;
    doSomething();
    return 0;
}
