//
//  main.cpp
//  algorithm_008
//
//  Created by mac_ck on 16/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>

using namespace std;
int main(){
    //stack 문제
    // 쌍이맞으면 스택을 비움.
    char a[30];
    cin >> a;
    int cnt = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '(') cnt++;
        else if (a[i] == ')') cnt--;
        
        if (cnt < 0) break;
    }
    
    if (cnt == 0){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    
    
    
}
