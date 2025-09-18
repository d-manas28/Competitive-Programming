#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    n1 = n1 ^ n2;
    n2 = n2 ^ n1;
    n1 = n1 ^ n2;
    cout<<"N1 :"<<n1;
    cout<<endl;
    cout<<"N2 :"<<n2;
    return 0;
}
