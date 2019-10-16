//
//  main.cpp
//  algorithm_005
//
//  Created by mac_ck on 15/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <stdio.h>

using namespace std;

int main(){
    // string으로 받고, 쪼개기 앞 두자리, 뒷 한자리
    freopen("input.txt", "rt", stdin);
    char a[20];
    int year, age;
    scanf("%s", &a);
    //숫자 0~9 : 48~57
    if (a[7]=='1' || a[7]=='2') year = 1900+((a[0]-48)*10 + (a[1]-48));
    else year = 2000+((a[0]-48)*10 + (a[1]-48));
    
    
    age = 2019 - year + 1;
    printf("%d ", age);
    if(a[7] == '1' || a[7]=='3') printf("M\n");
    else printf("W\n");
    return 0;
    
}
