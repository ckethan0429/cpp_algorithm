//
//  main.cpp
//  pointer_structure
//
//  Created by mac_ck on 2019/10/27.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;

struct Mystruct {
    int array[5]{9,7,5,3,1};
};

void dosomething(Mystruct ms){
    cout << sizeof(ms.array) << endl;
}

void dosomething2(Mystruct *ms){
    cout << sizeof((*ms).array) << endl;
}

//구조체나 클래스에 접근할 떄는 포인터로 강제변환하지 않는다.
int main(int argc, const char * argv[]) {
    Mystruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl;
    
    dosomething(ms);
    cout << endl;
    dosomething2(&ms);
    cout << endl;
}
