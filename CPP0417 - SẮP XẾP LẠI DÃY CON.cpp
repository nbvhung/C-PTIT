#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        multiset<int> se;
        for(int &x : a){
            cin>>x;
            se.insert(x);
        }
        vector<int> v;
        for(int x : se) v.push_back(x);
        int l,r;
        for(int i=0; i<n; i++){
            if(v[i] != a[i]){
                l = i+1;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(v[i] != a[i]){
                r = i+1;
                break;
            }
        }
        cout<<l<<" "<<r<<endl;
    }
}
