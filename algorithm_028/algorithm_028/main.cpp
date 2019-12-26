//
//  main.cpp
//  algorithm_028
//
//  Created by mac_ck on 2019/12/26.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    int n, i, sum=1, cnt=0, max=-2147000000;
    scanf("%d" , &n);
    
    for(i=1; i<=n; i++){
        sum *= i;
    }
    cout <<"총합: " << sum << endl;
    while(1){
        if(sum % 10 == 0){
            cnt = cnt + 1;
            if(cnt > max) max = cnt;
        }
        else{
            cnt=0;
        }
        sum = sum / 10;
        if(sum == 0) break;
    }
    cout << max << endl;
}
