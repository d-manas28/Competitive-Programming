#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n>>i;
    int bit = (n & (1<<i))?1:0;
    cout<<bit<<endl;
    return 0;
}
