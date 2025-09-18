#include<bits/stdc++.h>
using namespace std;
int calculateSum(int a,int b){
    int flaga=0,flagb=0;
    if(a<0) flaga=1;
    if(b<0) flagb=1;
    a = abs(a);
    b = abs(b);
    if(b == 1)
        return a;
    if(flaga==1 && flagb==1 || flaga==0 && flagb==0){
        return a + calculateSum(a,b-1);
    }
    else
        {
            int returnvalue = a + calculateSum(a,b-1);
            return -(returnvalue);
        }      

}
int main()
{
    int a,b;
    cin>>a>>b;
    int sum = calculateSum(a,b);
    cout<<sum<<endl;
    return 0;
}
