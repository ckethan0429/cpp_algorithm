//
//  main.cpp
//  algorithm_007
//
//  Created by mac_ck on 16/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>


using namespace std;
int main(){
    char a[101], b[101];
    //scanf("%s", &a); 하면 띄어쓰기 못읽음
    cin.getline(a,101);
    //gets(a);
    int i, p=0;
    for (i = 0; a[i] != '\0'; i++){
        if (a[i] != ' '){
            //a배열 순회하면서 공백이 아니면
            if (a[i]>=65 && a[i]<=90){
                // 대문자는 소문자로 변환(빼기해야하지않을까?)
                // 'A'=65, 'a'=97 : A->a되려면 +32해줘야함
                b[p++] = a[i] +32;
            }
            else b[p++] = a[i];
        }
    }
    b[p] = '\0';
    
    cout << b << endl;
    
}
