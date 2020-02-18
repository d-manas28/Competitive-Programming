#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool Isless(int value)
{
    return(value<20);
}
int main() 
{
int arr[] = {20,15,32,7,17,15,10,12,39,52};
int size = sizeof(arr)/sizeof(int);
int *pbegin = arr;
int *pend = arr + size;
pend = std::remove_if(pbegin,pend,Isless);
for(int *p = pbegin;p!=pend;++p)
{
    cout<<*p<<" ";
}    
return 0;
}
