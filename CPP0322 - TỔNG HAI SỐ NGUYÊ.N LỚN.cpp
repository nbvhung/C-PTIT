#include<bits/stdc++.h>
using namespace std;
using ll = long long;

string xoa_0(string &s){
    int k=0;
    while(k < s.size()-1 && s[k] == '0') k++;
    return s.substr(k);
}

string sum(string a, string b){
    if(a.size() > b.size()) swap(a,b);
    reverse(b.begin(), b.end());
    b += '0';
    reverse(a.begin(), a.end());
    a += string(b.size()-a.size(), '0');
    int n = a.size();
    string res = string(n, '0');
    int nho = 0;
    for(int i=0; i<n; i++){
        int tong = a[i]-'0' + b[i]-'0' + nho;
        res[i] += tong%10;
        nho = tong/10;
    }
    reverse(res.begin(), res.end());
    if(res[0] == '0') return res.substr(1);
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b; cin>>a>>b;
        cout<<sum(a,b)<<endl;
    }
}
