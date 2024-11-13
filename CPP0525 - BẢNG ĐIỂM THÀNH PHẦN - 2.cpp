#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct sv{
    string ma, ten, lop;
    double d1,d2,d3;
};

bool cmp(sv a, sv b){
    return a.ten < b.ten;
}

int main(){
    int n; cin>>n;
    sv a[n];
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin,a[i].ma);
        getline(cin,a[i].ten);
        cin>>a[i].lop;
        cin>>a[i].d1>>a[i].d2>>a[i].d3;
        cin.ignore();
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout<<i+1<<" "<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<fixed<<setprecision(1)<<a[i].d1<<" "<<a[i].d2<<" "<<a[i].d3<<endl;
    }
}
