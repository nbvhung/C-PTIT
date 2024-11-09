// Hãy xem xét một hệ thống tiền tệ của ngân hàng ABC bao gồm n đồng xu. Mỗi 
// đồng xu có một giá trị nguyên dương. Nhiệm vụ của bạn là tính số cách riêng biệt
// không xét đến thứ tự mà bạn có thể tạo ra số tiền x bằng cách sử dụng số tiền có
// sẵn. Ví dụ: nếu số xu là {2,3,5} và tổng mong muốn là 9, có 3 cách: 2 + 2 + 5; 3 
// + 3 + 3; 2 + 2 + 2 + 3;
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;
int dp[105][1000005];

int main(){
    int n,s; cin>>n>>s;
    int a[n+1];
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=0; i<=n; i++){
        dp[i][0] = 1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){
            if(j >= a[i])
                dp[i][j] = dp[i-1][j] + dp[i][j-a[i]]; 
            else dp[i][j] = dp[i-1][j];
            dp[i][j] %= mod;
        }
    }
    cout<<dp[n][s]<<endl;
} 