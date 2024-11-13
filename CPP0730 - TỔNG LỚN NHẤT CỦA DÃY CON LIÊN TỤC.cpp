#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll a[n];
        ll sum = 0, res=-1e9;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum = max(a[i], sum + a[i]);
            res = max(res, sum);
        }
        cout<<res<<endl;
    }
}
