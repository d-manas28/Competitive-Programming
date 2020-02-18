#include<bits/stdc++.h>
#define lint long long int
using namespace std;
lint memopad[1000];
lint calculatefib(lint n){
	if(n == 0||n == 1)
		return n;
	if(memopad[n] != -1)
		return memopad[n];
	lint ans = calculatefib(n-1) + calculatefib(n-2);
	memopad[n] = ans;
	return ans;
}
int main(){
	lint n;
	cin>>n;
	for(int i=0;i<=n;i++)memopad[i] = -1;
	lint ans = calculatefib(n);
	cout<<ans<<endl;
	return 0;
}
