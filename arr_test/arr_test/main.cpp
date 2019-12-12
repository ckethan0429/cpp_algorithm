//
//  main.cpp
//  arr_test
//
//  Created by mac_ck on 2019/10/27.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    char mystring[255];
    cin.getline(mystring, 255);
    
    int ix = 0;
    while(true){
        if (mystring[ix] == '\0') break;
        cout << mystring[ix] << " " << (int)mystring[ix] << endl;
        ix++;
    }
    
    /// ----------------------------------------------------------
    char source[] = "copy this!";
    char dest[50];
    
    strcpy(dest, source);
    cout << dest << " " << source << endl;
    
    // 만약 dest의 메모리 사이즈가 5라면? runtime에러발생
    // 안전하게
    strlcpy(dest, source, 50);
    cout << dest << "!!!" << source << endl;
}
