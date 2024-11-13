#include<bits/stdc++.h> 
using namespace std;

int n, x[100], ok=0;

void ktao(){
    for(int i=1; i<=n; i++){
        x[i] = i;
    }
}

void sinh(){
    int i = n-1;
    while(i>=1 && x[i] > x[i+1]){
        i--;
    }
    if(i==0) ok=1;
    else{
        int j=n;
        while(x[j] < x[i]) j--;
        swap(x[i],x[j]);
        reverse(x+i+1, x+n+1);
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        ktao();
        ok=0;
        while(!ok){
            for(int i=1; i<=n; i++){
                cout<<x[i];
            }
            cout<<" ";
            sinh();
        }
        cout<<endl;
    }
}
