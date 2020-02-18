// program to count the number of values using stl
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
using namespace std;
int main()
{
    fast;
    cin.tie(NULL);
    int arr[] = {20,56,98,78,45,15,65,98,56,78,98,56,15,65,18,98,56,56,98,75};
    int t;
    int size = sizeof(arr)/sizeof(int);
    sort(arr,arr+size);
    cin>>t;
    while(t--)
    {
        int key;
        cin>>key;
        if(binary_search(arr,arr+size,key)==true)
        {
         int* l_itr = lower_bound(arr,arr+size,key);
         int* h_itr = upper_bound(arr,arr+size,key);
         cout<<(h_itr-l_itr)<<"\n";
         }
        else
        cout<<"-1\n";
    }
    return 0;
}