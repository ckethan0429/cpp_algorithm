//
//  main.cpp
//  algorithm_021
//
//  Created by mac_ck on 2019/12/24.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[10], b[10], sumA=0, sumB=0, draw_count=0;
    int i;
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++){
        scanf("%d", &b[i]);
    }
    for(i=0; i<10; i++){
        if(a[i] > b[i]) sumA += 3;
        else if (a[i] == b[i]){
            sumA += 1;
            sumB += 1;
            draw_count += 1;
        }
        else sumB +=3;
    }
    printf("%d %d\n",sumA,sumB);
    
    if(sumA == sumB){
        for(i=9; i>=0; i--){
            if(a[i] == b[i]) continue;
            else if(a[i] > b[i]){
                printf("A\n");
                break;
            }
            else{
                printf("B\n");
                break;
            }
        }
        if(draw_count == 10) printf("D\n");
    }
    
    else if(sumA > sumB){
        printf("A\n");
    }
    else printf("B\n");
}
