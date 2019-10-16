//
//  main.cpp
//  algorithm_009
//
//  Created by mac_ck on 16/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;
/*
int main(){
    int N, i, j, cnt = 0;
    cin >> N;
    for (i=1; i<=N; i++){
        for (j=1; j<=i; j++){
            if(i % j == 0){
                cnt++;

            }
        }
        cout << cnt << " ";
        cnt = 0;
    }
}
*/
int cnt[50001];
int main(){
    int N, i, j;
    cin >> N;
    for (i=1; i<=N; i++){
        // i의 배수마다 카운트
        // N이 30000이고 i가 3000이라면 밑의 반복문은 10번밖에 반복하지않음.
        for (j=i; j<=N; j = j+i){
            cnt[j]++;
        }
    }
    
    for(i=1; i<N; i++){
        cout << cnt[i] << " ";
    }
}

