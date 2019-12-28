//
//  main.cpp
//  algorithm_028
//
//  Created by mac_ck on 2019/12/26.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    int n, i,j,tmp, cnt1=0, cnt2=0;
    scanf("%d" , &n);
    
    for(i=2; i<=n; i++){
        j=2;
        tmp = i;
        while(1){
            if(tmp % j == 0){
                if(j == 2) cnt1++;
                else if(j == 5) cnt2++;
                tmp = tmp / j;
            }
            else j++;
            
            if(tmp == 1) break;
        }
    }
    
    if(cnt1 >= cnt2) printf("%d\n", cnt2);
    else printf("%d\n", cnt1);
   
}
