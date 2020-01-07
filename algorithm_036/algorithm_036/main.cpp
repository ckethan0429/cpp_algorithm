//
//  main.cpp
//  algorithm_036
//
//  Created by mac_ck on 19/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int a[100], n, i, j, tmp;
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    // 정렬 시작
    
    for(i=1; i<n; i++){
        tmp = a[i];
        for(j=i-1; j>=0; j--){
            if(a[j] > tmp) a[j+1] = a[j];
            else break;
        }
        a[j+1] = tmp;
    }
    
    // 정렬 끝
    
    for (i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    
}
