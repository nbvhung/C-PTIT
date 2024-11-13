#include<bits/stdc++.h>
using namespace std;
using ll = long long;


bool cmp(string a, string b){
    string c = a+b;
    string d = b+a;
    return c>d;
}

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        int n; cin>>n;
        cin.ignore();
        string s; getline(cin,s);
        stringstream ss(s);
        vector<string> v;
        string tmp;
        while((ss >> tmp)){
            v.push_back(tmp);
        }
        sort(v.begin(),v.end(), cmp);
        for(string x:v) cout<<x;
        cout<<endl;
    }
}
