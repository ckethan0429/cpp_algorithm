//
//  main.cpp
//  algorithm_032
//
//  Created by mac_ck on 18/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>

using namespace std;
int main(){
    int i, j, n, tmp, idx;
    cin >> n;
    int a[n];
    
    for (i=0; i<n; i++){
        cin >> a[i];
    }
    
    for (i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            idx = i;
            if(a[j] < a[idx]){
                tmp = a[idx];
                a[idx] = a[j];
                a[j]= tmp;
            }
        }
    }
    
    for (i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
