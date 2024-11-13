#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
    private:
        string ma, ten, lop, ns, email;
        double gpa;

    public:
        SinhVien(){
            this->ma = "B20DCCN001";
            this->ten = ten;
            this->lop = lop;
            this->ns = ns;
            this->email = email;
            this->gpa = gpa;
        }

        string getLop(){
            return this->lop;
        }

        string getMa(){
            return this->ma;
        }

        friend istream& operator >> (istream& in, SinhVien& a){
            in>>a.ma;
            in.ignore();
            getline(in, a.ten);
            in>>a.lop>>a.email;
            // if(a.ns[1]=='/') a.ns = "0" + a.ns;
            // if(a.ns[4]=='/') a.ns.insert(3,"0");
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien a){
            out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
            return out;
        }
        
};

bool cmp(SinhVien a, SinhVien b){
    if(a.getLop() == b.getLop()){
        return a.getMa() < b.getMa();
    }
    return a.getLop() < b.getLop();
}

int main(){
    int n; cin>>n;
    SinhVien a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout<<a[i];
    }
    return 0;
}
