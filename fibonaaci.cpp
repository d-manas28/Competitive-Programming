#include<bits/stdc++.h>
using namespace std;
int fibonaaci(int n){
    if(n == 0||n == 1)
        return n;
    int n1 = fibonaaci(n-1);
    int n2 = fibonaaci(n-2);
    return n1 + n2;
}
int main()
{
    int n;
    cin>>n;
    int ans = fibonaaci(n);
    cout<<"Number at "<<n<<" position is: "<<ans<<endl;
    return 0;
}