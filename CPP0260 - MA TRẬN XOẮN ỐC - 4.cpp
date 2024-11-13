#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t = 1;
    while(t--){
        int n; cin>>n;
        int b[n][n];
        vector<int> v;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>b[i][j];
                v.push_back(b[i][j]);
            }
        }
        sort(v.begin(), v.end());
        int tmp=0, k=0;
        int a[n][n];
        int h1=0, c1=0, h2=n-1, c2=n-1;
        while(h1<=h2 && c1<=c2){
            for(int i=c1; i<=c2; i++){
                a[h1][i] = v[tmp++];
            }
            h1++;
            for(int i=h1; i<=h2; i++){
                a[i][c2] = v[tmp++];
            }
            c2--;
            if(h2>=h1){
                for(int i=c2; i>=c1; i--){
                    a[h2][i] = v[tmp++];
                }
                h2--;
            }
            if(c2>=c1){
                for(int i=h2; i>=h1; i--){
                    a[i][c1] = v[tmp++];
                }
                c1++;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
