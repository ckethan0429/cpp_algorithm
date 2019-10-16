//
//  main.cpp
//  algoritm
//
//  Created by mac_ck on 15/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n, m, i, sum = 0;
    cin >> n >> m;
    for(i=1; i<=n; i++){
        if(i%m == 0){
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
