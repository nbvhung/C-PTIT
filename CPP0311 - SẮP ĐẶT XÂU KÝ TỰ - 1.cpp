
#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    int a[26]={0};
    for(char x:s){
        a[x-'a']++;
    }
    int max_val = *max_element(a,a+26);
    if(s.length() - max_val + 1 >= max_val){
        cout<<"1\n";
    }
    else cout<<"0\n";
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
