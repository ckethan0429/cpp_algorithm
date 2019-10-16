//
//  main.cpp
//  algorithm_003
//
//  Created by mac_ck on 15/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int N, i, sum = 1;
    cin >> N;
    cout << 1;
    for (i = 2; i < N-1; i++){
        if(N % i == 0){
            sum += i;
            cout <<  " + " << i ;
        }
    }
    cout << " = " << sum << endl;
}
