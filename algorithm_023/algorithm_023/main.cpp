//
//  main.cpp
//  algorithm_023
//
//  Created by mac_ck on 2019/12/25.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    /*
     5 7 3 3 12 12 13 10 11
     1 2 1 2 3  4  5  1  2
    
     cnt, cnt_max
     */
    int i, n;
    int cnt=1, cnt_max=-2147000000;
    scanf("%d", &n);
    vector<int> a(n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=1; i<n; i++){
        if(a[i-1] <= a[i]) cnt++;
        else cnt = 1;
        
        if(cnt> cnt_max) cnt_max = cnt;
    }
    
    printf("%d\n",cnt_max);
    
}
