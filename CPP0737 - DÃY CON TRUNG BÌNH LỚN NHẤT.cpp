#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int nt(ll n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return n>1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll sum = 0;
        ll res = -1e9;
        int idx=-1;
        for(int i=0; i<k; i++){
            sum += a[i];
        }
        res = max(res, sum);
        for(int i=k; i<n; i++){
            sum = sum + a[i] - a[i-k];
            if(sum > res){
                res = sum;
                idx = i-k+1;
            }
        }
        for(int i=idx; i<idx+k; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
