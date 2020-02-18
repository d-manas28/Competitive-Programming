#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
int value;
int arr[] = {10,20,30,40,20,10,45,68,80};
cin>>value;
int size = sizeof(arr)/sizeof(int);
int *pbegin = arr;
int *pend = arr+sizeof(arr)/sizeof(int);
pend = std::remove(pbegin,pend,value);
for(int *p = pbegin;p!=pend;++p)
{
    cout<<*p<<" ";
}    
cout<<endl;
return 0;
}
