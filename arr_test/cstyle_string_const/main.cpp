//
//  main.cpp
//  cstyle_string_const
//
//  Created by mac_ck on 2019/10/27.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;

const char * getname(){
    return "Jackjack";
}

void dosomething (int y){
    cout << y << " " << &y << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    const char *name = "jackjack";
    const char *name2 = "jackjack";
    //함수의 형태도 가능
    const char *name3 = getname();
    //리터럴상수의 주소값이 같음
    cout << (uintptr_t)name << " " << (uintptr_t)name2 << " " << (uintptr_t)name3 << endl;
    
    
    int int_arr[]{1,2,3,4,5};
    char char_arr[]="Hello world";
    const char * name4 = "JackJack";
    //배열의 이름과 포인터를 찍으면 일반적으로 메모리 주소이지만
    //char타입인 경우에는 문자열이 출려되어 나온다.
    cout << int_arr << endl;
    cout << char_arr << endl;
    cout << name4 << endl;
    
    
    char c = 'Q';
    char *ptr = &c;
    cout << ptr << " " << &c << endl;
    
    dosomething(5);
return 0;
}
