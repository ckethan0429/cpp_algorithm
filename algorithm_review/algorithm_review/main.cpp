//
//  main.cpp
//  algorithm_review
//
//  Created by mac_ck on 2019/12/27.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    int n, i, j, tmp, cnt=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        tmp = i;
        j = 2;
        while(tmp > 0){
            if(tmp % 10 ==3) cnt++;
            tmp = tmp / 10;
        }
        
    }
    
    cout << cnt << endl;
    return 0;
}
