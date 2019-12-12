//
//  main.cpp
//  algorithm_013
//
//  Created by mac_ck on 21/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
#include <string>
int num[10];
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    char bignumber[101];
    int digit;
    int i;
    int max = -20000;
    int res;
    
    
    
    cin >> bignumber;
    cout << bignumber << endl;
    int length =  sizeof(num) / sizeof(*num) ;
    for(i=0; bignumber[i]!='\0'; i++){
        digit = bignumber[i] - '0';
        // cout << digit << endl;
        num[digit] = num[digit]+1;
    }
    
    for (i=0; i<10; i++){
        cout << num[i] << " ";
        if(num[i] >= max){
            
            max = num[i];
            res = i;
        }
    }
    cout << endl;
    cout << res << endl;
    
    return 0;
}
