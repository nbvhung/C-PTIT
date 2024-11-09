#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f[100];

int main(){
    int t; cin>>t;
    map<ll,bool> mp;
    f[0] = 0; f[1] = 1;
    mp[0] = mp[1] = true;
    for(int i=2; i<92; i++){
        f[i] = f[i-1] + f[i-2];
        mp[f[i]] = true; 
    }
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        vector<int> v;
        for(int i=0; i<n; i++){
            if(mp[a[i]]) v.push_back(a[i]);
        }
        for(int x : v) cout<<x<<" ";
        cout<<endl;
    }
}
