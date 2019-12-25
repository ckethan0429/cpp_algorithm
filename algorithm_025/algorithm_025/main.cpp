//
//  main.cpp
//  algorithm_025
//
//  Created by mac_ck on 2019/12/25.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n,i,j;
    scanf("%d",&n);
    int a[n], rank[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        rank[i] = 1;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[j] > a[i]) rank[i]++;
        }
    }
    
    for(auto& ele : rank) std::cout<< ele << " ";
    std::cout << std::endl;
    
    return 0;
}
