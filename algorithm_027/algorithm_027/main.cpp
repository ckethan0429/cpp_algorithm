//
//  main.cpp
//  algorithm_027
//
//  Created by mac_ck on 2019/12/26.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    int n, i, j, tmp;
    scanf("%d", &n);
    vector<int> ch(n+1);
    printf("%d! = ",n);
    
    for(i=2; i<=n; i++){
        //2 3 4  5 6  7 8
        //2 3 22 5 23 7 222
        //cout << i << "일때 :";
        tmp = i;
        j=2;
        while(1){
            if(tmp % j == 0){
                ch[j]++;
                tmp = tmp / j;
            }
            else
                j++;
            if(tmp == 1) break;
            
        }
    }
    for(i=2; i<=n; i++){
        if(ch[i] != 0) cout << ch[i] << " ";
    }
    
}
