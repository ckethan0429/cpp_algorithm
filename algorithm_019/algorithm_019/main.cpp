//
//  main.cpp
//  algorithm_019
//
//  Created by mac_ck on 2019/12/23.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, i, j, cnt = 0;
    bool anger = false;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n-1; j++){
            if(arr[i] > arr[j]) {
                anger = true;
            }
            else {
                anger = false;
            }
        }
        if(anger) cnt++;
    }
    printf("%d\n",cnt);
}

/*
        56 46 55 76 65 53 52 53 55 50
 max    56 56 56 76 76 76 76 76 76 76
 
 */
