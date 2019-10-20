//
//  main.cpp
//  algorithm_033
//
//  Created by mac_ck on 18/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>

using namespace std;
int main(){
    int a[101];
    int i, j,idx, n ,tmp, cnt=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(i=0; i<n-1;i++){
        idx = i;
        for(j=i+1;j<n;j++){
            if(a[j] > a[idx]) idx = j;
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }
    
    for(i=1; i<n; i++){
        if(a[i-1] != a[i]) cnt++;
        if (cnt==2) {
            cout << a[i];
            break;
        }
    }
}
