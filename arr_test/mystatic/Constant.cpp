//
//  Constant.cpp
//  mystatic
//
//  Created by mac_ck on 2019/11/03.
//  Copyright © 2019 cpp. All rights reserved.
//

#include "Constant.hpp"
#include <iostream>

int a=2;
static int b=2;


void doSomething()
{
    std::cout << "In test.cpp " << Constants::pi <<" "<<&Constants::pi <<std::endl;
    std::cout << b << std::endl;
}



namespace Constants{
extern const double pi(3.141592);
extern const double gravity(9.8);
}
