#include<bits/stdc++.h>
using namespace std;
using ll =  long long;

int main() {
	int t; cin >> t;	
	while (t--){
		int n; cin>>n;
		int a[n];
		int v[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int tmp=0;
		for(int i=0; i<n; i+=2){
			v[i] = a[tmp++];
		}
		for(int i=1; i<n; i+=2){
			v[i] = a[tmp++];
		}
		for(int i=0; i<n; i++) cout<<v[i]<<" ";
		cout<<endl;
	}
}
