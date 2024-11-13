#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
	
		getline(cin,s2);
		set<string> se1;
		set<string> se2;
		stringstream ss(s1);
		string tmp;
		while(ss >> tmp){
			se1.insert(tmp);
		}
		stringstream ss2(s2);
		while(ss2 >> tmp){
			se2.insert(tmp);
		}
		for(auto it : se1){
			if(se2.find(it) == se2.end()){
				cout<<it<<" ";
			}
		}
		cout<<endl;
	}
}
