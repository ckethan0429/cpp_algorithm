//
//  main.cpp
//  algorithm_031
//
//  Created by mac_ck on 2019/12/29.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char a[10];
    int c = 0, h = 0, i, pos;
    scanf("%s",&a);
    if(a[1] == 'H'){
        c = 1;
        pos = 1;
    }
    else{
        for(i = 1; a[i] != 'H'; i++){
            c = c * 10 + (a[i]-'0');
        }
        pos = i;
    }
    
    if(a[pos+1] == '\0') h = 1;
    else{
        for(i = pos+1; a[i] != '\0'; i++){
            h = h * 10 + (a[i] - '0');
        }
    }
    
    printf("%d\n", c*12 + h);
    
    
}