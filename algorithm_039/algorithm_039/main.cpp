#include <iostream>
#include <vector>
using namespace std;
int a[101], b[101], c[300];

int main(){
    int n, m, i, p1=1, p2=1, p3=1;
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(i=1; i<=m; i++){
        cin >> b[i];
    }

    while(p1<=n && p2<=m){
        if(a[p1] < b[p2]){
            c[p3++] = a[p1++];
        }
        else{
            c[p3++] = b[p2++];
        }
    }
    while(p1<=n) c[p3++] = a[p1++];
    while(p2<=m) c[p3++] = b[p2++];

    for(i=1; i<p3; i++) cout << c[i] << " ";
    
    /* 나의풀이
     
     int n, m, i, j=0, k=0, pos=0;
     scanf("%d", &n);
     vector<int> a(n);
     for(i=0; i<n; i++){
         scanf("%d", &a[i]);
     }
     
     scanf("%d", &m);
     vector<int> b(m);
     for(i=0; i<m; i++){
         scanf("%d", &b[i]);
     }
     
     vector<int> c(n+m);
     
     if(n <= m){
         while(k <n){
             if(a[k] <= b[j]){
                 c[pos++] = a[k++];
             }
             else{
                 c[pos++] = b[j++];
             }
         }
         if(j <= m){
             for(i = j; i < m; i++){
                 c[pos++] = b[j++];
             }
         }
     }
     else{
         while(j < m){
             if(a[k] <= b[j]){
                 c[pos++] = a[k++];
             }
             else{
                 c[pos++] = b[j++];
             }
         }
         if(k <= n){
             for(i = k; i < n; i++){
                 c[pos++] = a[k++];
             }
         }
     }
     for(auto& ele : c) cout << ele << " ";
     cout << endl;

     
     return 0;
     */

}
