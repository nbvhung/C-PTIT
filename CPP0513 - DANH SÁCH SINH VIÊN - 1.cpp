#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SinhVien{
    string ma = "B20DCCN0", ten, lop, ns;
    float gpa;
};

void nhap(SinhVien a[], int n){
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin,a[i].ten);
        cin>>a[i].lop>>a[i].ns>>a[i].gpa;
        if(i<9) a[i].ma = a[i].ma + "0" + to_string(i+1);
        else a[i].ma = a[i].ma + to_string(i+1);
        if(a[i].ns[1]=='/') a[i].ns = "0" + a[i].ns;
        if(a[i].ns[4] == '/') a[i].ns.insert(3,"0");
    }
}

void in(SinhVien a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
