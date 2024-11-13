#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

class NhanVien{
    private:
        string ma , ten, gt, ns, dc, mst, hd;

    public:
        NhanVien(){
            this->ma = ma;
            this->ten = ten;
            this->gt = gt;
            this->ns = ns;
            this->dc = dc;
            this->mst = mst;
            this->hd = hd;
        }

        friend istream& operator >> (istream& in, NhanVien &a){
            cnt++;
            a.ma = "000";
            if(cnt<10){
                a.ma += "0" + to_string(cnt);
            }
            else a.ma += to_string(cnt);
            in.ignore();
            getline(in, a.ten);
            getline(in,a.gt);
            getline(in,a.ns);
            getline(in,a.dc);
            in>>a.mst>>a.hd;
            return in;
        }

        friend ostream& operator << (ostream& out, NhanVien a){
            cout<<a.ma<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.hd<<endl;
            return out;  
        }

        int getD(){
            return stoi(this->ns.substr(3,2));
        }

        int getM(){
            return stoi(this->ns.substr(0,2));
        }

        int getY(){
            return stoi(this->ns.substr(6,4));
        }
};

bool cmp(NhanVien a, NhanVien b){
    if(a.getY() != b.getY()) return a.getY() < b.getY();
    if(a.getM() != b.getM()) return a.getM() < b.getM();
    return a.getD() < b.getD();
}

void sapxep(NhanVien a[], int n){
    sort(a,a+n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
