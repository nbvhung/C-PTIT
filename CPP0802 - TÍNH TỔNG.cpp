#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int check(string &s){
    if(s.size() > 9) return 0;
    int res = 0;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            res = res * 10 + (s[i] - '0');
        }
    }
    if(res < 2e10) return (int)res;
    return 0;
}

int main() {
    fstream f;
    f.open("DATA.in", ios::in);
    string s;
    ll sum = 0;
    while(f >> s){
        sum += check(s);
    }
    cout<<sum;
    f.close();
}
