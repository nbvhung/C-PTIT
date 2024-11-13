#include<bits/stdc++.h>
using namespace std;

int check(string s){
	if(s[0]=='0') return 0;
	for(int i=0; i<s.size(); i++){
			if(!isdigit(s[i])) return 0;
	}
	return 1;
}

int main() {
	int t; cin >> t;	
	while (t--) {
		string s; cin>>s;
		multiset<char> se;
		int sum = 0;
		for(int i=0; i<s.size(); i++){
			if(isdigit(s[i])){
				sum += (s[i]-'0');
			}
			else{
				se.insert(s[i]);
			}
		}
		for(char x : se) cout<<x;
		cout<<sum<<endl;
	}
}
