#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    fstream f;
    f.open("DATA.in", ios::in);
    map<int, int> mp;
    int n;
    while(f>>n){
        mp[n]++;
    }
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    f.close();
}
