//
//  main.cpp
//  algorithm_043
//
//  Created by mac_ck on 2020/01/10.
//  Copyright © 2020 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int count(int &mid, int &n, vector<int> &a){
    int i, cnt=1, sum=0;
    for(i=0; i<n; i++){
        if(sum + a[i] > mid){
            cnt++;
            sum = a[i];
        }
        else{
            sum += a[i];
        }
    }
    return cnt;
}

int main(int argc, const char * argv[]) {
    int n, m, i, lt=1, rt=0, mid, res;
    scanf("%d %d",&n,&m);
    vector<int> a(n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        rt += a[i];
    }
    
    while(lt <= rt){
        mid = (lt + rt) / 2;
        if(count(mid, n, a) > m){
            lt = mid + 1;
        }
        else{
            rt = mid - 1;
            res = mid;
        }
        
    }
    cout << res << endl;
    
    return 0;
}
