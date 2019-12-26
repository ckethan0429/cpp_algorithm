//
//  main.cpp
//  algorithm_026
//
//  Created by mac_ck on 2019/12/26.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    int n, i, j;
    scanf("%d",&n);
    vector<int> a(n);
    vector<int> ch(n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        ch[i] = 1;
    }
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            if(a[j] >= a[i]){
                ch[i]++;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ",ch[i]);
    }
    
}
