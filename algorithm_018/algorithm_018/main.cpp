//
//  main.cpp
//  algorithm_018
//
//  Created by mac_ck on 2019/12/23.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int i, N, M, cnt=0, max=0;
    scanf("%d %d",&N, &M);
    int arr[N];
    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
        //M보다 크면
        
        if(arr[i] > M){
            if(cnt == max) max++;
            cnt++;
        }
        else{
            cnt = 0;
        }
    }
    if(max==0){
        printf("-1");
    }
    printf("%d\n",max);
    return 0;
}

/*
        23 17 120 34 60 60 123 23 25 100 101 102 104
 cnt    0  0  1   0  1   2   3   0  0   1   2   3   4
 max    0  0  1   1  1   2   3   3  3   3   3   3   4
 **/
