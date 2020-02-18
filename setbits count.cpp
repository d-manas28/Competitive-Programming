#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int setbitscnt = 0;
    while(n>0)
    {
        setbitscnt = setbitscnt + (n & 1);
        n = n>>1;
    }
    cout<<setbitscnt<<endl;
    return 0;
}
