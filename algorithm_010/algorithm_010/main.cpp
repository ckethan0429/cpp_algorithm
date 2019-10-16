//
//  main.cpp
//  algorithm_010
//
//  Created by mac_ck on 16/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>

using namespace std;

int digit_sum(int x){
    int sum = 0, tmp;
    while(x > 0){
        tmp = x%10;
        sum += tmp;
        x = x/10;
    }
    return sum;
}

int main(){
    freopen("data.txt", "rt", stdin);
    int N, num, sum, max=-2147000000, res = 0, i;
    cin >> N;
    for (i = 1; i <= N; i++){
        cin >> num;
        sum = digit_sum(num);
        if (sum > max){
            max = sum;
            res = num;
        }
    }
    
    cout << res << endl;
        
}
