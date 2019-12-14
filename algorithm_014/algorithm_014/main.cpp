//
//  main.cpp
//  algorithm_014
//
//  Created by mac_ck on 2019/12/14.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPrime(int x){
    if(x==1) return false;
    for (int i = 2; i < x; i++){
        if(x % i ==0){
            return false;
        }
    }
    return true;
        
}

int reverse(int x){
    int res = 0, tmp;
    while (x>0){
        //나머지 저장
        tmp = x%10;
        //x가 0이 될때까지 10으로 나눠준다.
        x = x/10;
        //그 전에 반복문의 res값을 한자리 올리고, 그다음 tmp(나머지값)을 더해준다.
        res = res*10 + tmp;
    }
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int N, num, tmp, res=0;
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> num;
        
        tmp = reverse(num);
        res = isPrime(tmp);
        if (res == true){
            cout << tmp << " ";
        }
    }
    return 0;
}
