#include<bits/stdc++.h>
using namespace std;
using ll =  long long;

int main() {
	int t; cin >> t;	
	while (t--){
		set<int> hop, giao, tmp;
		int n,m; cin>>n>>m;
		int a[n], b[m];
		for(int &x : a){
			cin>>x;
			hop.insert(x);
			tmp.insert(x);
		}
		for(int &x : b){
			cin>>x;
			hop.insert(x);
		}
		for(int i=0; i<m; i++){
			if(tmp.find(b[i]) != tmp.end()){
				giao.insert(b[i]);
			}
		}
		for(int x : hop) cout<<x<<" ";
		cout<<endl;
		for(int x : giao) cout<<x<<" ";
		cout<<endl;
	}
}
