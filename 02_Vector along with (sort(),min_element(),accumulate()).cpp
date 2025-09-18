#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
using namespace std;
int main()
{
    fast;
    int t;
    char bulbs[55][55];
    cin>>t;
    while(t--)
    {
        int m,n,k;
        cin>>m>>n>>k;
        vector<int> v(m,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>bulbs[i][j];
                if(bulbs[i][j]=='*') v[i]++;
            }
        }
        sort(v.begin(),v.end());
        int idx = 0;
        while(k>0 && idx < m && v[idx] < n - v[idx])
        {
            v[idx] = n - v[idx];
            k--;
            idx++;
        }
        if(k!=0 && k % 2 == 1)
        {
            vector<int>::iterator ite = min_element(v.begin(),v.end());
            *ite = n - *ite;
        }
        cout<<accumulate(v.begin(),v.end(),0)<<"\n";
    }
    return 0;
}
