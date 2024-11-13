#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt=0;

class SinhVien{
    private: 
        string ma, ten, lop, ns;
        float gpa;
    public:
        SinhVien(){
            this->ma = "B20DCCN0";
            this->ten = "";
            this->lop = "";
            this->ns = "";
            this->gpa = 0;
        }

        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
     
};

string chuanhoa(string &s){
    s[0] = toupper(s[0]);
    for(int i=1; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

istream& operator >> (istream& in, SinhVien &a){
    cnt++;
    in.ignore();
    if(cnt<10) a.ma += "0" + to_string(cnt);
    else a.ma += to_string(cnt);
    getline(in, a.ten);
    stringstream ss(a.ten);
    string tmp; vector<string> v;
    while(ss >> tmp){
        v.push_back(chuanhoa(tmp));
    }
    a.ten = "";
    for(string x : v){
        a.ten += " " + x;
    }
    getline(in,a.lop);
    getline(in,a.ns);
    if(a.ns[1] == '/'){
        a.ns = "0" + a.ns;
    }
    if(a.ns[4] == '/'){
        a.ns.insert(3,"0");
    }
    in>>a.gpa;
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
    return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
