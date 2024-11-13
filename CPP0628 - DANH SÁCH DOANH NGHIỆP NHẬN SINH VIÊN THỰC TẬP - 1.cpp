#include<bits/stdc++.h>
using namespace std;

class sinhvien{
    private:
        string ma, ten;
        int sl;
    public:
        friend istream& operator >> (istream&, sinhvien&);
        friend ostream& operator << (ostream&, sinhvien);

        int getsl(){
            return this->sl;
        }

        string getma(){
            return this->ma;
        }
        
};

istream& operator >> (istream& in, sinhvien &a){
    in.ignore();
    getline(in, a.ma);
    getline(in, a.ten);
    cin>>a.sl;
    return in;
}

ostream& operator << (ostream& out, sinhvien a){
    out<<a.ma<<" "<<a.ten<<" "<<a.sl<<endl;
    return out;
}

bool cmp(sinhvien a, sinhvien b){
    if(a.getsl() == b.getsl()) return a.getma() < b.getma();
    return a.getsl() > b.getsl();
}

int main(){
    int n; cin>>n;
    sinhvien a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
