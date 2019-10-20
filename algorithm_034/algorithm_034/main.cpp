//
//  main.cpp
//  algorithm_034
//
//  Created by mac_ck on 18/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>

using namespace std;
int main(){
    int i, j, tmp, n, a[101];
    cin >> n;
    
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    
    
    for (i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    
    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
