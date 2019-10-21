//
//  main.cpp
//  algorithm_012
//
//  Created by mac_ck on 21/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n, sum=0, digit=9, res=0, cnt=1;
    cin >> n;
    while(sum+digit < n){
        sum = sum + digit;
        res = res + (digit*cnt);
        cnt++;
        digit = digit * 10;
    }
    
    res = res + (n- sum) * cnt;
    cout << res<< endl;
    
}
