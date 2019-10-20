//
//  main.cpp
//  algorithm_037
//
//  Created by mac_ck on 19/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;
int C[20];
int main(){
    int i, j, pos, a, s, n;
    cin >> s >> n;
    
    for(i=0; i<n; i++){
        cin >> a;
        pos = -1;
        for(j=0; j<s; j++){
            if(a == C[j]){
                pos = j;
                
            }
        }
        
        
        // Cache Miss 상황
        if(pos == -1){
            for(j=s-1; j>=1; j--){
                C[j] = C[j-1];
            }
        }
        else{
            for(j=pos; j>=1; j--){
                C[j] = C[j-1];
            }
        }
        C[0] = a;
        
    }
    
    for (i=0; i<s; i++){
        cout << C[i] << " ";
    }
}
