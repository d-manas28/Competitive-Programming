#include<bits/stdc++.h>
using namespace std;
long long int minCoins(int n,int coins[],int t,long long int dp[]){
    if(n == 0)
        return 0;
    if(dp[n] != 0)
        return dp[n];
    int ans = INT_MAX, preans;
    for(int i=0;i<t;i++){
        if(n-coins[i] >= 0){
            preans = minCoins(n-coins[i],coins,t,dp);
            ans = min(ans,preans+1);
        }
    }
    dp[n] = ans;
    return dp[n];
}
int main(){
    int n;
    int t;
    cin>>n>>t;
    int coins[t];
    for(int i=0;i<t;i++)cin>>coins[i];
    long long int dp[100000] = {0};
    long long int ans = minCoins(n,coins,t,dp);
    cout<<ans<<endl;
    return 0;
}
