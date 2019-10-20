//
//  main.cpp
//  algorithm_036
//
//  Created by mac_ck on 19/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>

using namespace std;
int main(){
    int a[101];
    int i,j,n,tmp;
    cin >> n;
    for (i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(i=1; i<n; i++){
        tmp = a[i];
        for(j=i-1; j>=0; j--){
            if (a[j] > tmp){
                a[j+1] = a[j];
            }
            else break;
        }
        a[j+1] = tmp;
    }
    
    for (i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
