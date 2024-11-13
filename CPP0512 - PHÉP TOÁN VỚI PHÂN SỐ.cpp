#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct PhanSo{
    ll tu, mau;
};

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}

void rutgon(PhanSo &p){
    ll uc = gcd(p.tu,p.mau);
    p.tu /= uc;
    p.mau /= uc;
}

PhanSo tich(PhanSo &p, PhanSo &q){
    PhanSo res;
    res.tu = q.tu * p.tu;
    res.mau = p.mau * q.mau;
    rutgon(res);
    return res;
}

PhanSo tong(PhanSo &p, PhanSo &q){
    PhanSo sum;
    ll mc = lcm(p.mau, q.mau);
    sum.mau = mc;
    p.tu = mc/p.mau * p.tu;
    q.tu = mc/q.mau * q.tu;
    q.mau = p.mau = mc;
    sum.tu = q.tu + p.tu;
    
    sum = tich(sum,sum);
    rutgon(sum);
    return sum;
}

void process(PhanSo &a, PhanSo &b){
    PhanSo c = tong(a,b);
    PhanSo tmp = tich(a,b);
    PhanSo d = tich(tmp,c);
    cout<<c.tu<<"/"<<c.mau<<" ";
    cout<<d.tu<<"/"<<d.mau<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
