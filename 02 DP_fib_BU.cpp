#include<bits/stdc++.h>
using namespace std;
int calculatefib(int n){
	int dp[1000];
	dp[0] = 0;
	dp[1] = 1;
	for(int currentele = 2;currentele <= n;currentele++){
		dp[currentele] = dp[currentele-1] + dp[currentele-2];
	}
	return dp[n];
}
int main()
{
	int n;
	cin>>n;
	int ans = calculatefib(n);
	cout<<ans<<endl;
	return 0;
}
