//
//  main.cpp
//  algorithm_024
//
//  Created by mac_ck on 2019/12/25.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    //freopen("data.txt", "rt", stdin);
    int n, i, pre, now, pos;
    scanf("%d",&n);
    vector<int> ch(n);
    scanf("%d",&pre);
    
    for(i=1; i<n; i++){
        scanf("%d",&now);
        pos = abs(now-pre);
        if(pos>0 && pos<n && ch[pos]==0){
            ch[pos] = 1;
        }
        else{
            printf("NO\n");
            return 0;
        }
        pre = now;
    }
    printf("YES\n");
}

