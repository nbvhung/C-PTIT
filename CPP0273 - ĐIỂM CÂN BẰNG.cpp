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
        int sum=0;
        for(int &x : a){
            cin>>x;
            sum += x;
        }
        int ok=0;
        int left=0;
        for(int i=0; i<n; i++){
            sum -= a[i];
            if(sum == left){
                cout<<i+1<<endl;
                ok=1;
                break;
            }
            left += a[i];
        }
        if(!ok) cout<<-1<<endl; 
    }
}
