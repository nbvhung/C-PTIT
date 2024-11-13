#include<bits/stdc++.h> 
using namespace std;
using ll = long long;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int cnt1 = 0, mx=0;
        for(int i=0; i<n; i++){
            int cnt2 = 0;
            while(a[i] != 0){
                if(a[i] %2 == 0){
                    cnt2++;
                    a[i] /=2;
                }
                else{
                    cnt1++;
                    a[i]--;
                }
            }
            mx = max(mx, cnt2);
        }
        cout<<cnt1+mx<<endl;
    }
}
