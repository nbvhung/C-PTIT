#include<bits/stdc++.h> 
using namespace std;
using ll = long long;

ll powmod(ll a, ll b, ll c){
    if(b==0) return 0;
    ll x= powmod(a,b/2,c);
    if (b%2==0) return ( 2* (x%c)) %c;
    else return (a%c + 2*(x%c)) %c; 
}

int main(){
    int t; cin>>t;
    while(t--){
        ll a,b,c; cin>>a>>b>>c;
        cout<<powmod(a,b,c)<<endl;
    }
}
