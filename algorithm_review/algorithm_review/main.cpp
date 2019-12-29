//
//  main.cpp
//  algorithm_review
//
//  Created by mac_ck on 2019/12/27.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    /* 1번 문제
    int n, m, i, sum = 0;
    scanf("%d %d", &n, &m);
    
    for(i = 1; i <= n; i++){
        if(i % m == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
    */
    
    /*
     2번문제
     int a, b, i;
     scanf("%d %d", &a, &b);
     int sum = a;
     printf("%d ", a);
     for(i = a+1; i <= b; i++){
         printf("+%d ", i);
         sum += i;
     }
     printf("= %d", sum);
     */
    
    /*
     3번문제
     int n, i, sum = 1;
     scanf("%d", &n);
     cout << sum << " ";
     for(i = 2; i < n; i++){
         if(n % i == 0){
             cout << "+ " << i << " ";
             sum += i;
         }
     }
     printf("= %d\n", sum);

     */
    
    /*
     4번문제
    int n, max = -2147000000, min = 2147000000;
    cin >> n;
    vector<int> a(n);
    for(auto &ele : a){
        cin >> ele;
    }

    for(auto &ele : a){
        if(ele > max) max = ele;
        if(ele < min) min = ele;
    }

    cout << max - min << endl;
     */
   
    /*5번문제
     char a[20];
     scanf("%s", &a);
     int i, age = 0;
     for(i = 0; i < 2; i++){
         age = age*10 + (a[i]-'0');
     }
     
     if(a[7] == '1') {
         age = 2019 - (age + 1900) +1;
         cout << age << " " << "M" << endl;
     }
     else if(a[7] =='2'){
         age = 2019 - (age + 1900) +1;
         cout << age << " " << "W" << endl;
     }
     else if(a[7] =='3'){
         age = 2019 - (age + 2000) +1;
         cout << age << " " << "M" << endl;
     }
     else{
         age = 2019 - (age + 2000) +1;
         cout << age << " " << "W" << endl;
     }

     */
    
    /*
     6번 문제
     int i, cnt = 0, num = 0;
     char a[51];
     scanf("%s", &a);
     for(i = 0; a[i] != '\0'; i++){
         if(a[i] >= 48 && a[i] <= 57){
             num = num * 10 + (a[i]-48);
         }
     }
     for(i=1; i<=28; i++){
         if(num % i == 0) cnt++;
     }
     
     cout << num << endl;
     cout << cnt << endl;
     */
    
    char a[101], b[101];
    int i, p=0;
    cin.getline(a,101);
    for(i=0; a[i]!='\0'; i++){
        if(a[i]!=' '){
            if(a[i]>=65 && a[i]<=90){
                b[p++]=a[i]+32;
            }
            else b[p++]=a[i];
        }
    }
    b[p]='\0';
    printf("%s\n", b);
}
