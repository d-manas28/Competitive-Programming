#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int check = ((n & 1)?1:0);
    if(check == 1)
        cout<<"ODD";
    else
        cout<<"EVEN";
    return 0;
}
