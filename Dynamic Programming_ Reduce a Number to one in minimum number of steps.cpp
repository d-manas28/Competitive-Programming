#include<bits/stdc++.h>
using namespace std;
const int inf = INT_MAX;

int memopad[10000];

int redfunc(int n){
    if(n == 1)return 0;
    int q1 = inf, q2 = inf, q3 = inf;
    if(memopad[n] != -1)
        return memopad[n];
    if(n % 3 == 0) q1 = 1 + redfunc(n/3);
    if(n % 2 == 0) q2 = 1 + redfunc(n/2);
    q3 = 1 + redfunc(n-1);
    memopad[n] = min(q1,min(q2,q3));
    return memopad[n];
}

int redfunc_DP(int n){
    int dp[10000];
    dp[0] = 0; dp[1] = 0;
    dp[2] = 1; dp[3] = 1;
    for(int currele = 4;currele <= n;currele++){
        int q1 = inf, q2 = inf,  q3 = inf;
        if(currele % 3 == 0)
            q1 = 1 + dp[currele/3];
        if(currele % 2 == 0)
            q2 = 1 + dp[currele/2];
        q3 = 1 + dp[currele - 1]; 
        dp[currele] = min(q1,min(q2,q3));
    }
return dp[n];
}
int main(){
    int n;
    cin>>n;
    fill(memopad,memopad+n+1,-1);
    int ans = redfunc(n);
    int dpans = redfunc_DP(n);
    //cout<<ans<<endl;
    cout<<dpans<<endl;
    return 0;
}
