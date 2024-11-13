#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod;

ll conver(string a){
    ll res = 0;
    for(int i=0; i<a.size(); i++){
        res = (res * 10 + (a[i]-'0')) % mod;
    }
    return res;
}

ll powmod(ll a, ll b){
    if(b ==0) return 1;
    if(b==1) return a;
    ll x = powmod(a, b/2);
    if(b%2==0) return ((x%mod)*x)%mod;
    return ((a%mod*x%mod)*x)%mod;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a; ll b;
        cin>>a>>b>>mod;
        ll tmp = conver(a);
        cout<<powmod(tmp,b)<<endl;
    }
}
