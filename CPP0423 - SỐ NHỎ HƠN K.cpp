#include<bits/stdc++.h>
using namespace std;
using ll =  long long;

int main() {
	int t; cin >> t;	
	while (t--){
		int n,k; cin>>n>>k;
		int a[n];
		int pos=0;
		for(int &x : a){
			cin>>x;
			if(x <= k) pos++;
		}
		int res=-1, cnt=0;
		for(int i=0; i<pos; i++){
			if(a[i] <= k) cnt++;
		}
		res = cnt;
		for(int i=pos; i<n; i++){
			if(a[i-pos] <= k) cnt--;
			if(a[i] <= k) cnt++;
			res = max(res, cnt);
		}
		cout<<pos-res<<endl;
	}
}
