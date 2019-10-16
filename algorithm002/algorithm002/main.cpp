//
//  main.cpp
//  algorithm002
//
//  Created by mac_ck on 15/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int A,B,i,sum=0;
    cin >> A >> B;
    cout << A << " " <<B << endl;
    for (i = A; i < B; i++){
        sum += i;
        cout << i << " + " ;
    }
    
    cout << i << " = " << sum+i << endl;
}
