//
//  main.cpp
//  OOP
//
//  Created by mac_ck on 2019/11/01.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
static int a;

void something(){
    static int b;
    b++;
    cout << b << endl;
    
}

class Friend{
//이름, 나이, 성별, 주소, 번호
private:
    string m_name;
    int    m_age;
    char   m_sex;
    string m_address;
    string m_number;
    
public:
    Friend()
    :m_name("Tom"), m_age(1), m_sex('F'),m_address("서울시"), m_number("010"){
        cout << "default constructor" << endl;
        cout << m_name << " " << m_age << " " << m_sex << " " << m_address << " " << m_number << endl;
    }
    
    Friend(const int& age, const string& name="Ahn"){
        m_name = name;
        m_age = age;
        
        cout << "hello " << m_name << ". are you " << m_age << "?" << endl;
}
    
    Friend(const string& name, const int& age, const char& sex,
           const string& address, const string &number){
        m_name = name;
        m_age = age;
        m_sex = sex;
        m_address = address;
        m_number  = number;
    }
    
    
    void print(){
        cout << m_name << " " << m_age << " " << m_sex << " " << m_address << " " << m_number << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Friend defaultfr;
    Friend me(29);
    Friend fr1{"jack", 12, 'M', "서울시 도봉구", "01043995389"};
    Friend fr2{"jil", 11, 'F', "경기도 구리시", "01093904726"};
    
    fr1.print();
    fr2.print();
    
    something();
    cout << a << endl;
    
    
    return 0;
}
