#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SinhVien{
    string ma = "B20DCCN0", ten, lop, ns;
    float gpa;
};

string chuanhoa(string &s){
    s[0] = toupper(s[0]);
    for(int i=1; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

void nhap(SinhVien a[], int n){
    for(int i=0; i<n; i++){
        scanf("\n");
        if(i<9) a[i].ma += "0" + to_string(i+1);
        else a[i].ma += to_string(i+1);
        string s;
        getline(cin,s);
        a[i].ten = "";
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while(ss >> s){
            s[0] = toupper(s[0]);
            for(int i=1; i<s.size(); i++){
                s[i] = tolower(s[i]);
            }
            a[i].ten += s + " ";
        }
        a[i].ten.pop_back();
        getline(cin,a[i].lop);
        getline(cin,a[i].ns);
        if(a[i].ns[1]=='/') a[i].ns = "0" + a[i].ns;
        if(a[i].ns[4] == '/') a[i].ns.insert(3,"0");
        cin>>a[i].gpa;
    }
}

void in(SinhVien a[], int n){
    
    for(int i=0; i<n; i++){
        string res = a[i].ten;
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
