#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int a[], int n, int l, int r){
    for(int i=l; i<r; i++){
        if(a[i] > a[i+1]){
            for(int j=i+1; j<r; j++){
                if(a[j] < a[j+1]) return false;
            }
        }
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int &x : a) cin>>x;
        int l,r; cin>>l>>r;
        if(check(a,n,l,r)) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
