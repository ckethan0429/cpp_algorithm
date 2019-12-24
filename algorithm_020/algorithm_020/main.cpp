//
//  main.cpp
//  algorithm_020
//
//  Created by mac_ck on 2019/12/23.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
using namespace std;
int a[101], b[101];
int main(int argc, const char * argv[]) {
    int n, i;
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        scanf("%d",&b[i]);
    }
    
    for(i=0; i<n; i++){
        if(a[i] == b[i]) printf("D\n");
        else if(a[i] == 1 && b[i] == 3) printf("A\n");
        else if(a[i] == 2 && b[i] == 1) printf("A\n");
        else if(a[i] == 3 && b[i] == 2) printf("A\n");
        else printf("B\n");
 
    }
/*
 1: 가위, 2: 바위, 3: 보
 2>1 , 3>2, 1>3
 */
}
