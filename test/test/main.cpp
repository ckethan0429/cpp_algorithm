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
int c[20];
int main(){
    int s, n, a, i, j, pos;
    scanf("%d %d", &s,&n);
    for(i=0; i<n; i++){
        scanf("%d", &a);
        pos = -1;
        for(j=0; j<s; j++) if(c[j] == a) pos = j;
        if(pos == -1){
            for(j=s-1; j>=1; j--) c[j] = c[j-1];
        }
        else{
            for(j=pos; j>=1; j--) c[j] = c[j-1];
        }
        c[j] = a;
    }
}
