//
//  main.cpp
//  mystatic_variable
//
//  Created by mac_ck on 2019/11/03.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;

class Something{
public:
    int m_value;
    static int s_value1;
    //반드시 초기화해줘야함.
    static const int s_value2 = 1;
    //컴파일 타임에 값이 결정나야함.
    static constexpr int s_value3 = 1;
};

//cpp파일에 따로 클래스를 정의한다면, 헤더가아닌 cpp에 정의해줘야함.
int Something::s_value1 = 1;

//const이기 때문에 초기화하지못함.
//int Something::s_value2 =2;





int main(int argc, const char * argv[]) {
    
    //메모리에 정적으로 존재하기 때문에 인스턴스가 없어도 값을 가져온다.
    cout << &Something::s_value1 << " " << Something::s_value1 << endl;
    
    Something st1, st2;
    st1.m_value = 2;
    
    cout << &st1.m_value << " " << st1.m_value << endl;
    cout << &st2.m_value << " " << st2.m_value << endl;
    
    //static 멤버변수 값 바꾸기
    Something::s_value1 = 1024;
    cout << &Something:: s_value1 << " " << Something::s_value1 << endl;
    
    return 0;
}
