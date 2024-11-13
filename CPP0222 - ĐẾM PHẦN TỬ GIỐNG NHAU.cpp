#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<int> se;
        map<int,int> mp;
        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
                se.insert(a[i][j]);
            }
            for(int x : se){
                mp[x]++;
            }
            se.clear();
        }
        int cnt=0;
        for(auto it : mp){
            if(it.second == n) cnt++;
        }
        cout<<cnt<<endl;
    }
}
