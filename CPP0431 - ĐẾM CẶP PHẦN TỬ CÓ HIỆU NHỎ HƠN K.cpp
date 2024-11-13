#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        for(int &x : a) cin>>x;
        sort(a,a+n);
        ll res=0;
        for(int i=0; i<n; i++){
            auto it = lower_bound(a+i+1, a+n, k+a[i]);
            int x = it-(a+i)-1;
            res += x;
        }
        cout<<res<<endl;
    }
}
