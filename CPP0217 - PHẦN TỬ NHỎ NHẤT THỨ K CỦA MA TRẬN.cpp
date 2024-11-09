#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> v;
        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
                v.push_back(a[i][j]);
            }
        }
        sort(v.begin(),v.end());
    
        cout<<v[k-1]<<endl;  
    }
}
