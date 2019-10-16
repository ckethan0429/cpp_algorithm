//
//  main.cpp
//  algorithm_004
//
//  Created by mac_ck on 15/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int N, a, max = -21470000, min = 21470000;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> a;
        if (max < a) max = a;
        if (min > a) min = a;
    }
    
    cout << max - min;
    

    
}
