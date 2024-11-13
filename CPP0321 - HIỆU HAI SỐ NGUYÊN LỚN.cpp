#include<bits/stdc++.h>
using namespace std;
using ll = long long;

string xoa_0(string s){
    int k=0;
    while(k<s.size()-1 && s[k]=='0'){
        k++;
    }
    return s.substr(k);
}

string sub(string a, string b){
    int len = max(a.length(), b.length());
    while(a.length() < len) a = "0" + a;
    while(b.length() < len) b = "0" + b;
    if(a < b) swap(a, b);
    string as(len,'0');
    int rmb = 0;
    for(int i=a.size()-1; i>=0; i--){
        int tg = (a[i] - '0') - (b[i] - '0') - rmb;
        if(tg < 0)
        {
            tg += 10;
            rmb = 1;
        }
        else rmb = 0;
        as[i] = tg + '0';
    }
    return as;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b; cin>>a>>b;
        cout<<sub(a,b)<<endl;
    }
}
