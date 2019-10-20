//
//  main.cpp
//  algorithm_038
//
//  Created by mac_ck on 19/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
#include <vector>


using namespace std;
int main(){
    int i, j, n, pos;
    cin >> n;
    vector<int> is(n+1);
    vector<int> os(n+1);

    
    for (i=1; i<=n; i++){
        cin >> is[i];
    }
    
    for(i=n; i>=1; i--){
        pos = i;
        for(j=1; j<=is[i]; j++){
            os[pos] = os[pos+1];
            pos++;
        }
        os[pos] = i;
    }
    
    for (i=1; i<=n; i++) cout << os[i] << " ";
}
