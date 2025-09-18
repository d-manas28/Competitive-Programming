#include<bits/stdc++.h>
using namespace std;
int getMaxLength(vector<int> cost,int n,int m){
    int v[n] = {0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i >= j)
             v[i] = max(cost[i], v[i-j] + v[j]);
        }
    }
    return v[n];
}
int main(){
    int total_length;
    int m;
    cin>>total_length>>m;
    vector<int> cost;
    cost.push_back(0);
    for(int i=1;i<=m;i++){
        int data;
        cin>>data;
        cost.push_back(data);
    }
    int ans = getMaxLength(cost,total_length,m);
    cout<<ans<<endl;
    return 0;
}