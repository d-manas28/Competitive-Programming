#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[7]; //= {'h','s','r','a','h'};
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    vector<char> vch;
    vch.resize(7);
    char* pbegin = arr;
    int size = sizeof(arr)/sizeof(char);
    char* pend = arr+size;
    reverse_copy(pbegin,pend,vch.begin());
    vector<char>::iterator it;
    for(it = vch.begin();it<vch.end();++it)
    {
        cout<<*it<<" ";
    }
    return 0;
}