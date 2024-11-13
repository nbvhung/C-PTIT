#include<bits/stdc++.h>
using namespace std;

int tongcs(int n){
    int res=0;
    while(n){
        res += n%10;
        n/=10;
    }
    return res;
}

int sum(string s){
    int res = 0;
    for(int i=0; i<s.length(); i++){
        res += (s[i]-'0');
    }
    return res;
}

set<int>mm;
void init(){
    mm.insert(9);
    for(int i=0; i<=1000; i++){
        if(mm.find(tongcs(i)) != mm.end()){
            mm.insert(i);
        }
    }
}

int main(){
    init();
    int t; cin>>t;
    while(t--){
       string s; cin>>s;
       int tong = sum(s);
       if(mm.find(tong) != mm.end()){
            cout<<"1\n";
       }
       else cout<<"0\n";
    }
}
