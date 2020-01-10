//
//  main.cpp
//  algorithm_041
//
//  Created by mac_ck on 2020/01/09.
//  Copyright © 2020 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    int n, i, j, sum=0, tmp, cnt=0;
    scanf("%d", &n);
    for(i=2; sum<n; i++){
        sum=0;
        for(j=1; j<=i; j++){
            sum += j;
        }
        
        
        tmp = n - sum;
        if(tmp % i == 0){
            cnt++;
            printf("%d ",1+(tmp/i));
            for(j=2; j<=i; j++){
                printf("+ %d ",j+(tmp/i));
            }
            printf("= %d\n", n);
        }
    }
    printf("%d\n",cnt);
    return 0;
}
