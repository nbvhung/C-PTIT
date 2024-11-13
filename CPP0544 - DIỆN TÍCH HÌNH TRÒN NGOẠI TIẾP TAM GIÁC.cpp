#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;

struct point{
    double x,y;
};

double distance(point a, point b){
    return sqrt(pow(b.x-a.x,2) + pow(b.y-a.y,2));
}

void xuly(){
    point a,b,c;
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
    double c1 = distance(a,b), c2 = distance(b,c), c3 = distance(c,a);
    if(c1+c2<=c3 || c1+c3<=c2 || c2+c3<=c1){
        cout<<"INVALID\n";
        return;
    }
    double p = (c1+c2+c3)/2;
    double s = sqrt(p*(p-c1)*(p-c2)*(p-c3));
    double r = (c1*c2*c3)/(4*s);
    double res = r*r*PI;
    cout<<fixed<<setprecision(3)<<res<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        xuly();
    }
}
