//
//  main.cpp
//  algorithm_035
//
//  Created by mac_ck on 18/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int i, j, n, a[101], tmp=0;
    cin >> n;
    
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            //양수인지 음수인지 판단.
            if(a[j]>0 && a[j+1] < 0){
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
