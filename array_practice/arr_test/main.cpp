//
//  main.cpp
//  arr_test
//
//  Created by mac_ck on 2019/10/27.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
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
}
