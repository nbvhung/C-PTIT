#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n];
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            cin>>a[i];
            v.push_back({a[i],abs(x-a[i])});
        }
        stable_sort(v.begin(), v.end(), cmp);
        for(auto it : v){
            cout<<it.first<<" ";
        }
        cout<<endl;
    }
}
