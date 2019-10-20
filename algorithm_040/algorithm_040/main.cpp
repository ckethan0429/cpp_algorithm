#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n, m, i, p1=0, p2=0, p3=0;
    cin >> n;
    vector<int> a(n);
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    cin >> m;
    vector<int> b(m);
    for(i=0; i<m; i++){
        cin >> b[i];
    }
    sort(b.begin(),b.end());

    vector<int> c(n+m);


    while(p1<n && p2<m){
        if(a[p1] == b[p2]){
            c[p3++] = a[p1++];
            p2++;
        }
        else if(a[p1] < b[p2]){
            p1++;
        }
        else p2++;
    }

    for(i=0; i<p3; i++){
        cout << c[i] << " ";
    }
}
