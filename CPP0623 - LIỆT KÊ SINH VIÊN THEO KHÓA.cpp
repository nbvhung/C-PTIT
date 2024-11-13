#include<bits/stdc++.h>
using namespace std;

class sinhvien{
    private:
        string ma, ten, lop, email = "";
    public:
        friend istream& operator >> (istream&, sinhvien&);
        friend ostream& operator << (ostream&, sinhvien);
        string getlop(){
            return this->lop;
        }
};

istream& operator >> (istream& in, sinhvien &a){
    in>>a.ma;
    cin.ignore();
    getline(cin,a.ten);
    in>>a.lop>>a.email;
    return in;
}

ostream& operator << (ostream& out, sinhvien a){
    out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
    return out;
}

int main(){
    int n; cin>>n;
    map<int,vector<sinhvien>>mp;
    for(int i=0; i<n; i++){
        sinhvien tmp; cin>>tmp;
        mp[stoi(tmp.getlop().substr(1,2))].push_back(tmp);
    }
    int t; cin>>t;
    while(t--){
        int nam; cin>>nam;
        cout<<"DANH SACH SINH VIEN KHOA "<<nam<<":\n";
        for(sinhvien x : mp[nam%100]){
            cout<<x;
        }
    }
}
