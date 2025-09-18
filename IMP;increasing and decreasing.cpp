#include<bits/stdc++.h>
using namespace std;
void printDecreasing(int n){
    if(n == 0)
        return;
    cout<<n<<" ";
    printDecreasing(n-1);
}
void printIncreasing(int n)
{
    if(n == 0)
        return;
    printIncreasing(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    printIncreasing(n);
    cout<<endl;
    printDecreasing(n);
    return 0;
}