//
//  main.cpp
//  algorithm_016
//
//  Created by mac_ck on 2019/12/16.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;
int a[60], b[60];
int main(int argc, const char * argv[]) {
    int i;
    //글자입력받기
    char str[100];
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++){
        //cout << int(str[i]  <<"임"<<endl;
        if(str[i] >= 65 && str[i] <=90 ){
            a[str[i]-64]++;
        }
        else
            a[str[i]-70]++;
        
    }

    
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++){
        //cout << int(str[i]  <<"임"<<endl;
        if(str[i] >= 65 && str[i] <=90 ){
            b[str[i]-64]++;
        }
        else
            b[str[i]-70]++;
        
    }
    
    for(i=1; i<=52; i++){
        if(a[i]!=b[i]){
            printf("No\n");
            exit(0);
        }
        
    }
    printf("YES\n");

    
    return 0;
}
