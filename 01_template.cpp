#include <iostream>
using namespace std;

template<class T>

void printarray(T arr,int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main() {
    char arr[] = "abc";
    int arr2[] = {1,2,2,4,5,7};
    float arr4[] = {2.5,3.7,1.56,9.4};  
    printarray(arr,3);
    printarray(arr2,6);
    printarray(arr4,4);
}
