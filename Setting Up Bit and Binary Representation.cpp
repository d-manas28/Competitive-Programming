#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int convertToBinary(int n)
{
    while(n>0)
    {
        int data = (n % 2);
        v.push_back(data);
        n = n/2;
    }
    reverse(v.begin(),v.end());
    cout<<"Binary Representation Is: "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
int main()
{
    int n,i;
    cin>>n>>i;
    int finalnumber = (n ^ (1<<i));
    cout<<finalnumber<<endl;
    convertToBinary(finalnumber);
    return 0;
}
