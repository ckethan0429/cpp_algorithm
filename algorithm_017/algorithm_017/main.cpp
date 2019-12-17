//
//  main.cpp
//  algorithm_017
//
//  Created by mac_ck on 2019/12/17.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
using namespace std;

int sum(int x){
    int total = 0;
    for(int i = 1; i <= x; i++) total += i;
    return total;
    
}

int main(int argc, const char * argv[]) {
    int n, i;
    scanf("%d", &n);
    int num[n], cal[n];
    
    for(i = 0; i < n; i++){
        scanf("%d %d",&num[i],&cal[i]);
    }
    
    for(i = 0; i < n; i++){
        //sum과 cal비교
        if (cal[i] == sum(num[i])){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    
}
