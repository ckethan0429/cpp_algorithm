//
//  main.cpp
//  algorithm_037
//
//  Created by mac_ck on 19/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int C[20];
int main(){
    int s, n, a, i, j, pos;
    scanf("%d %d", &s, &n);
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        pos=-1;
        for(j=0; j<s; j++) if(C[j]==a) pos=j;
        if(pos==-1){
            for(j=s-1; j>=1; j--) C[j]=C[j-1];
        }
        else{
            for(j=pos; j>=1; j--) C[j]=C[j-1];
        }
        C[j]=a;
    }
    for(i=0; i<s; i++) printf("%d ", C[i]);
    return 0;
}



