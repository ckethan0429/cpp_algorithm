//
//  main.cpp
//  mystatic_func
//
//  Created by mac_ck on 2019/11/03.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;

class Something{
private:
    static int s_value;
    int m_value = 3;
    
public:
    static int getValue(){
        //static function에서는 this를 사용할 수 없다.
        //단순히 this를 사용하지 못하는 것이 아니고, this로 접근하는 모든 것들을 사용할 수 없음.
        //ex) return m_value;
        return s_value;
    }
    
    int temp(){
        return this->s_value;
    }
};

int Something::s_value  = 1024;

int func(int x){
    return 6;
}


int main(int argc, const char * argv[]) {
    
    cout << Something:: getValue() << endl;
    cout << endl;
    
    Something s1, s2;
    cout << s1.getValue() << endl;
    //cout << s1.s_value << endl;
    cout << endl;
    
    
    int (Something::*fptr1)() = &Something::temp;
    cout << (s2.*fptr1)() << endl;
    
    int (*fptr2)() =   &Something::getValue;
    cout << fptr2() << endl;
    
    int (*fcnptr)(int) = &func;
    cout << fcnptr(1) << endl;
    
    return 0;
}
