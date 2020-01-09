//
//  main.cpp
//  test
//
//  Created by mac_ck on 2020/01/07.
//  Copyright © 2020 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool desc(int a, int b){ return a > b; }

//소트인사이드
/*
 int main(int argc, const char * argv[]) {
 int n, i=0,tmp, cnt=0;
 scanf("%d", &n);
 tmp = n;
 while(tmp>0){
     cnt++;
     tmp = tmp/10;
 }
 vector<int> a(cnt);
 
 while(n > 0){
     tmp = n%10;
     a[i] = tmp;
     n = n/10;
     i++;
 }
 
 sort(a.begin(),a.end(),desc);
 for(auto&ele : a) cout << ele ;//
 
 return 0;

 */
int main(){
    int n, m, p1 =0, p2=0;
    scanf("%d",&n);
    vector<int> a(n);
    for(auto &ele : a) cin >> ele;
    scanf("%d",&m);
    vector<int> b(m);
    for(auto &ele : b) cin >> ele;
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    for(auto &ele : a) cout << ele << " ";
    cout << endl;
    for(auto &ele : b) cout << ele << " ";
    cout << endl;
    while(p1<n && p2<m){
        if(a[p1] == b[p2]){
            printf("%d ",a[p1]);
            p1++;
            p2++;
        }
        else{
            if(a[p1] < b[p2]) p1++;
            else p2++;
        }
    }
}
