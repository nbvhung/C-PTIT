#include<bits/stdc++.h>
using namespace std;
using ll = long long;

string max_val(string &s){
	for(int i=0; i<s.size(); i++){
		if(s[i] == '5'){
			s[i] = '6';
		}
	}
	return s;
}

string min_val(string &s){
	for(int i=0; i<s.size(); i++){
		if(s[i] == '6'){
			s[i] = '5';
		}
	}
	return s;
}

int main() {
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		string s1=max_val(a), s2 = min_val(a), s3=max_val(b), s4=min_val(b);
	//	cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
		ll res1 = stoll(s1) + stoll(s3);
		ll res2 = stoll(s2) + stoll(s4);
		cout<<res2<<" "<<res1<<endl;
	}
}
