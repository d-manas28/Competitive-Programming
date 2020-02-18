#include<bits/stdc++.h>
#define ii pair<int, int>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<ii,string> table;
    while(t--)
    {
        ii code;
        string name;
        cin>>code.first>>code.second;
        cin>>name;
        table[code] = name;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        ii code;
        cin>>code.first>>code.second;
        cout<<table[code]<<"\n";
    }
return 0;
}
