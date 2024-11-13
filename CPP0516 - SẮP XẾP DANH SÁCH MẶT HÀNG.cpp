#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct mh{
    string ma, ten, hang;
    double nhap, xuat;
};

double getln(mh a){
    return a.xuat-a.nhap;
}

bool cmp(mh a, mh b){
    return getln(a) > getln(b);
}

int main(){
    int n; cin>>n;
    mh a[n];
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin,a[i].ten);
        getline(cin,a[i].hang);
        cin>>a[i].nhap>>a[i].xuat;
        a[i].ma = to_string(i+1);
    }    
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].hang<<" "<<fixed<<setprecision(2)<<getln(a[i])<<endl;
    }
    return 0;
}
