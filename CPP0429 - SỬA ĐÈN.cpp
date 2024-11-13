#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t=1;
    while(t--){
        int n,k,b; cin>>n>>k>>b;
        int a[b], cnt=0;
        unordered_set<int> se;
        for(int i=0; i<b; i++){
            cin>>a[i];
            se.insert(a[i]);
        }
        int res = 1e9;
        for(int i=1; i<=k; i++){
            if(se.find(i) != se.end()){
                cnt++;
            }
        }
        for(int i=k+1; i<=n; i++){
            if(se.find(i) != se.end()) cnt++;
            if(se.find(i-k) != se.end()) cnt--;
            res = min(res,cnt);
        }
        cout<<res<<endl;
    }
}
