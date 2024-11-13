#include<bits/stdc++.h>

using namespace std;
using ll = long long;

string chuan(string &s){
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main() {
    fstream f;
    f.open("VANBAN.in", ios::in);
    string s;
    set<string> se;
    while(f >> s){
        se.insert(chuan(s));
    }
    for(auto it : se){
        cout<<it<<endl;
    }
    f.close();
}
