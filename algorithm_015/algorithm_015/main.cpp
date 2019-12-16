//
//  main.cpp
//  algorithm_015
//
//  Created by mac_ck on 2019/12/14.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, i, j, flag, cnt=0;
    scanf("%d", &n);
    for(i=2; i<=n; i++){
        flag=1;
        for(j=2; j * j <= i; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag==1) cnt++;
        
    }
    printf("%d\n", cnt);
    
    }
