#include<bits/stdc++.h>
using namespace std;
int factorialcal(int n){
    int ans;
    if(n == 0)
        return 1;
    ans = n * factorialcal(n-1);
    return ans; 
}
int main()
{
    int n;
    cin>>n;
    int ans = factorialcal(n);
    cout<<"Factorial of "<<n<<" is "<<ans<<endl; 
    return 0;
}