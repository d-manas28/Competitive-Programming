#include<bits/stdc++.h>
using namespace std;
int main(){
    int index;
    int arr[] = {10,2,0,20,30,50,20,6,2};
    cin>>index;
    int size = sizeof(arr)/sizeof(int);  
    for(int i=index;i<size;i++)
    {
        arr[i-1] = arr[i];
    }
    size = size-1;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}