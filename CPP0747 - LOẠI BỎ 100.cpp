#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int cnt=0;
        for(int i=0; i<s.size()-2; i++){
            if(s=="") break;
            if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='0'){
                s.erase(i,3);
                cnt+=3;
                i=-1;
            }
        }
        if(cnt==0) cout<<"\n";
        else cout<<cnt<<endl;
    }
        
}
