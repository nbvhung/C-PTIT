#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct NhanVien{
    string ma, ten, gt, ns, dc, mst, hd;

};

int cnt=0;

void nhap(NhanVien &a){
    ++cnt;
    if(cnt < 10) a.ma = "0000" + to_string(cnt);
    else a.ma = "000" + to_string(cnt);
    cin.ignore();
    getline(cin, a.ten);
    cin>>a.gt>>a.ns;
    cin.ignore();
    getline(cin,a.dc);
    cin>>a.mst>>a.hd;
}

int gety(NhanVien a){
    return stoi(a.ns.substr(6,4));
}

int getm(NhanVien a){
    return stoi(a.ns.substr(0,2));
}

int getd(NhanVien a){
    return stoi(a.ns.substr(3,2));
}

bool cmp(NhanVien a, NhanVien b){
    if(gety(a) != gety(b)) return gety(a) < gety(b);
    if(getm(a) != getm(b)) return getm(a) < getm(b);
    return getd(a) < getd(b);
}

void sapxep(NhanVien a[], int n){
    sort(a,a+n,cmp);
}

void inds(NhanVien a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].gt<<" "<<a[i].ns<<" "<<a[i].dc<<" "<<a[i].mst<<" "<<a[i].hd<<endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
