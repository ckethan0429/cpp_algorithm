//
//  main.cpp
//  algorithm_006
//
//  Created by mac_ck on 16/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>

using namespace std;
int main(){
    //문자열 입력
    char a[100];
    scanf("%s", &a);
    
    int res = 0;
    int cnt = 0, i;
    //숫자만 추출 (48~57사이)
    for (i=0; a[i]!='\0'; i++){
    // 앞의 0제거
        if(a[i]>=48 && a[i]<=57){
            // 0 2 8 -> res = 0 * 10 + ( 0 ) -> res = 0 * 10 + (2) -> res = 2 -> res = 20 + ( 8) -> res =28
            res = res * 10 + (a[i]-48);
        }
    }
    
    //추출된 숫자 출력
    cout << res << endl;
    
    //1부터 추출된 숫자만큼 순회하면서 나눳을 때 나머지 0 찾아서 카운팅
    for (i = 1; i <= res; i++){
        if (res % i == 0) {
            cnt++;
        }
    }
    
    // 약수 출력
    cout << cnt << endl;
}
