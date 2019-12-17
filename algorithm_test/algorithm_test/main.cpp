//
//  main.cpp
//  algorithm_test
//
//  Created by mac_ck on 2019/12/17.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
using namespace std;

int a[60], b[60];
int main(int argc, const char * argv[]) {
    char str[100];
    int i;
    scanf("%s", str);
//    //printf("%s", str);
//    printf("%d\n", 'A');
//    printf("%d\n", 'Z');
//    printf("%d\n", 'a');
//    printf("%d\n", 'z');
    for (i = 0; str[i]!='\0'; i++){
        if(str[i] >= 65 && str[i] <=90){
            a[str[i]-64]++;
        }
        else{
            a[str[i]-70]++;
        }
    }
    
    scanf("%s", str);
    for (i = 0; str[i]!='\0'; i++){
           if(str[i] >= 65 && str[i] <=90){
               b[str[i]-64]++;
           }
           else{
               b[str[i]-70]++;
           }
       }
    
    for(i=0; i<52; i++){
        if(a[i] != b[i]){
            printf("NO\n");
            exit(0);
        }
        
    }
    
    printf("YES\n");
    return 0 ;
    }
    
