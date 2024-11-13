#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
string chuan(string s){
    stringstream ss(s);
    string res = "";
    string tmp;
    while(ss >> tmp){
        res += toupper(tmp[0]);
    }
    return res;
}

string getName(string s){
    string res, tmp;
    stringstream ss(s);
    while(ss >> tmp){
        res = tmp;
    }
    return res;
}

class gv{
    private:
        string ma = "GV", ten, bm;
    public:
        gv(){
            this->ma = ma;
            this->ten = ten;
            this->bm = bm;
        }

        friend istream& operator >> (istream&, gv&);
        friend ostream& operator << (ostream&, gv);

        string getTen(){
            return this->ten;
        }

        string getma(){
            return this->ma;
        }

        string getbm(){
            return this->bm;
        }
};

istream& operator >> (istream& in, gv &a){
    cnt++;
    if(cnt < 10){
        a.ma += "0" + to_string(cnt);
    }
    else{
        a.ma += to_string(cnt);
    }
    getline(in, a.ten);
    getline(in, a.bm);
    return in;
}

ostream& operator << (ostream& out, gv a){
    out<<a.ma<<" "<<a.ten<<" "<<chuan(a.bm)<<endl;
    return out;
}

bool tim(string s, string word){
    for(char &x : s) x = tolower(x);
    for(char &x : word) x = tolower(x);
    return s.find(word) != string::npos;
}

bool cmp(gv a, gv b){
    if(getName(a.getTen()) != getName(b.getTen())){
        return getName(a.getTen()) < getName(b.getTen());
    }
    return a.getma() < b.getma();
}

int main(){
    int n; cin>>n;
    cin.ignore();
    gv a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int q; cin>>q;
    cin.ignore();
    while(q--){
        string word; getline(cin, word);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<word<<":\n";
        for(int i=0; i<n; i++){
            if(tim(a[i].getTen(), word)){
                cout<<a[i];
            }
        }
    }
}
