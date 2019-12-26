//
//  main.cpp
//  algorithm_023
//
//  Created by mac_ck on 2019/12/25.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    freopen("data.txt", "rt", stdin);
    int n, i, pre, now, cnt, max;
        scanf("%d", &n);
        scanf("%d", &pre);
        cnt=1;
        max=1;
        for(i=2; i<=n; i++){
            scanf("%d", &now);
            if(now>=pre){
                cnt++;
                if(cnt>max) max=cnt;
            }
            else cnt=1;
            pre=now;
        }
        printf("%d\n", max);
        return 0;
    
}
