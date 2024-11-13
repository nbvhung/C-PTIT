#include<bits/stdc++.h>
using namespace std;
using ll =  long long;

int main() {
	int t; cin >> t;	
	while (t--){
		string s; cin>>s;
		int res = -1, tmp = 0;
		for(char x : s){
			if(isdigit(x)){
				tmp = tmp * 10 + (x-'0');
			}
			else{
				res = max(res, tmp);
				tmp = 0;
			}
		}
		res = max(res, tmp);
		cout<<res<<endl;		
	}
}
