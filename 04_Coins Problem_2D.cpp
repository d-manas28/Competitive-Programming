#include<bits/stdc++.h>
using namespace std;
long getWays(vector<int> v,int m,int n){
long table[m+1][n+1];
for(int i=1;i<=n;i++){
		table[0][i]	= 0;
	}
for(int i=0;i<=m;i++){
		table[i][0] = 1;
	}
for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j-v[i-1]>=0){
				table[i][j] = table[i-1][j] + table[i][j-v[i-1]];
			}
			else{
				table[i][j] = table[i-1][j];	
			}
		}
	}
	return table[m][n];
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
