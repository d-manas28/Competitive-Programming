#include<bits/stdc++.h>
using namespace std;
long getWays(vector<int> v,int m,int n){
	long table[n+1];
	std::fill(table,table+n+1,0);
	table[0] = 1;
	for(int i=0;i<m;i++){
		for(int j=v[i];j<=n;j++){
			table[j] = table[j] + table[j-v[i]];
		}
	}
	return table[n];
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> v;
	for(int i=0;i<m;i++){
		int data;
		cin>>data;
		v.push_back(data);
	}
//	for(int i=0;i<m;i++)cout<<v[i]<<endl;
	long ans = getWays(v,m,n);
	cout<<ans<<endl;
	return 0;
}
