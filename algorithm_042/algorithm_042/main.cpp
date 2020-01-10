//
//  main.cpp
//  algorithm_042
//
//  Created by mac_ck on 2020/01/10.
//  Copyright © 2020 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    int n, key, lt, rt, mid;
    scanf("%d %d", &n, &key);
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    sort(a.begin(),a.end());
    lt = 0;
    rt = n-1;
    
    
    while(lt <= rt){
        mid = (lt + rt) / 2;
        if(a[mid] == key){
            printf("%d\n",mid+1);
            break;
        }
        else if(a[mid] > key){
            rt = mid - 1;
        }
        else{
            lt = mid +1;
        }
    }
    return 0;
}
