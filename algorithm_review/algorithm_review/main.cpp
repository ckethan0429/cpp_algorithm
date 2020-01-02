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
#include <typeinfo>

using namespace std;

int digit_sum(int x){
    int tmp = x;
    int sum = 0;
    while(tmp > 0){
        sum += tmp % 10;
        tmp = tmp / 10;
    }
    return sum;
}
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
    /*
     7번
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
     */
    
    /* 8번문제
     궁금증1 : 미리 범위를 잡아놓고 char배열을 선언해야하나? 입력을 받은만큼만 배열을 지정할수는 없나?
     배열이나 벡터 모두 초기화를 해야함. 초기화를 안하면 임의의수나 0으로 초기화가 됨. 어쩃건 초기화를 해야됨.
     
     방법은 버퍼배열을 선언후 버퍼에 입력값을 받고
     char str[30];
     cin >> str;
     int len = int(strlen(str));
      cout << len << endl;
      
      vector<char> str2;
     
      int cnt = 0;
      for(int i = 0; str[i] != '\0'; i++){
          if(str[i] == '(') cnt++;
          else cnt--;
      }
      if(cnt == 0){
          cout << cnt << " YES" << endl;
      }
      else{
          cout << cnt << " NO" << endl;
      }
      
     
     */
    
    
    /*
     9번문제 : 약수를 구한다? 배수를 체크한다!
     int n, i, j;
     scanf("%d", &n);
     vector<int> cnt(n+1);
     
     for(i = 1; i <= n; i++){
         for(j = i; j <= n; j=j+i){
             cnt[j]++;
         }
     }
     
     for(i = 1; i <= n; i++){
         printf("%d ",cnt[i]);
     }

     */
    
    /*10번문제
     int n, i, max = -2147000000, sum =0, max_num=0;
     scanf("%d",&n);
     
     vector<int> num(n);
     for(i=0; i<n; i++){
         scanf("%d", &num[i]);
     }
     for(i=0; i<n; i++){
         sum = digit_sum(num[i]);
         
         if(sum > max){
             max = sum;
             max_num = num[i];
         }
     }
     cout << max_num << endl;
     
     */
    
    /*11번
    int n,i,tmp, cnt = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        tmp = i;
        while(tmp > 0){
            cnt++;
            tmp = tmp / 10;
        }
    }
    cout << cnt << endl;
     */
    
//    int i, n, cnt = 1;
//    int result = 0, digit = 0;
//    int sum = 9;
//    scanf("%d", &n);
//    for(i = 1; i <= n; i++){
//        while(digit + sum < n){
//            result = result + (sum * cnt); //0 + (9*1)  //9+(90*2)
//            digit = digit + sum; //9  //99
//            sum = sum * 10; // 90 //900
//            cnt++; //2 //3
//        }
//    }
//    result = result +(n-digit) * cnt;
//    cout << result << endl;
    
//    cout << endl;
    /*
    int arr[5]{0};
    char arr2[5]{0};
    char arr3[]="hi";
    cin >> arr3;
    
    cout << sizeof(arr) << endl;
    
    cout << sizeof(arr2) << endl;
    
    cout << sizeof(arr3) << endl;

    cout << arr3 << strlen(arr3) << endl;
    for(auto &ele : arr3){
        cout << ele;
    }
    cout << endl;
    
    */
    /*
     // 컴파일러가 자동 동적변환하는 것 같음.
     int n1=0;
     cin >> n1;
     int arrr[n1];
     for (auto &ele : arrr)
         cin >> ele;
     for (auto &ele : arrr)
     cout << ele << endl;
     
     */
//
//    char b[30];
//    cin >> b;
//    int length = int(strlen(b)) ;
//    vector<char> a(length);
//    cout << a.size() << endl;
//
//    char str[30];
//    cin >> str;
//     int len = int(strlen(str));
//     cout << len << endl;
//
//     int cnt = 0;
//     for(int i = 0; i<len; i++){
//         if(str[i] == '(') cnt++;
//         else cnt--;
//     }
//     if(cnt == 0){
//         cout << cnt << " YES" << endl;
//     }
//     else{
//         cout << cnt << " NO" << endl;
//     }
//
    
    /*
     32번 선택정렬
    int n, i, j, tmp, idx, cnt = 0;
    scanf("%d", &n);
    vector<int> arr(n);
    vector<int> b(n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n-1; i++){
        idx = i;
        for(j = i+1; j < n; j++){
            if (arr[idx] < arr[j]) idx = j;
        }
        tmp = arr[idx];
        arr[idx] = arr[i];
        arr[i] = tmp;
    
    }
    
        
    for(i = 1; i < n; i++){
        if(arr[i] != arr[i-1]) cnt++;
        if(cnt == 2){
            printf("%d\n", arr[i]);
            break;
        }
    }
     */
    int n, i, j, tmp;
    scanf("%d", &n);
    vector<int> arr(n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    
    
}


//초기화로 크기가 고정,
