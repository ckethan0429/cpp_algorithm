//
//  main.cpp
//  algorithm_022
//
//  Created by mac_ck on 2019/12/24.
//  Copyright © 2019 읻쓴. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    freopen("data.txt", "rt", stdin);
    int n, k, i, j;
    int sum=0;
    int max_sum=-2147000000;
    scanf("%d %d",&n,&k);
    vector<int> a(n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    /*
    for(i = 0; i < n-k+1; i++){
        cout << i << endl;
        for(j = i; j < i+k; j++){
            sum += a[j];
            cout << "a[j] : "<< a[j] << endl;
        }
        if(sum > max_sum) max_sum = sum;
        sum =0;
       
    }
    printf("%d\n", max_sum);
     */
    
    for(i=0; i<k; i++){
        sum += a[i];
    }
    max_sum = sum;
    
    for(i=k; i<n; i++){
        sum += a[i] - a[i-k];
        if(sum > max_sum) max_sum = sum;
    }
    
    printf("%d\n", max_sum);
    
}
