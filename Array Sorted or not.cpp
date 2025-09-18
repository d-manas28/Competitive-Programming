#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int size){
    if(size == 1)
        return true;
    if(arr[0] < arr[1] && isSorted(arr+1,size-1))
        return true;
    return false;
}
int main()
{
    int arr[] = {2,5,19,10,12};
    bool val = isSorted(arr,5);
    if(val)
        cout<<"Yes, array is sorted";
    else
        cout<<"No, array is not sorted";
    return 0;
}