#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    if(s.size() == 1) return false;
    int l=0, r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]) return false;
        l++; r--;
    }
    return true;
}

bool cmp(pair<string,int> a, pair<string,int> b){
    if(a.first.size() == b.first.size()){
        return a.first > b.first;
    }
    return a.first.size() > b.first.size();
}

int main(){
    string s;
    map<string, int> mp;
    vector<string> v;
    vector<pair<string,int>> res;
    while(cin >> s){
        if(check(s)){
            v.push_back(s);
        }
    }
    for(int i=0; i<v.size(); i++){
        mp[v[i]]++;
    }
    for(auto it : mp){
        res.push_back({it.first, it.second});
    }
    sort(res.begin(), res.end(),cmp);
    for(auto it : res){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
