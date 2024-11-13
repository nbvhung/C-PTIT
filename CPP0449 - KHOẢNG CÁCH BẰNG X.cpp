#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int bin(int a[], int n, int x){
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid] == x) return 1;
        else if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n];
        int ok=0;
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0; i<n; i++){
            if(bin(a,n,x + a[i])){
                cout<<1<<endl;
                ok = 1;
                break;
            }
        }
        if(!ok) cout<<-1<<endl;
    }
}
