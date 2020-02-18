#include<bits/stdc++.h>
using namespace std;
int convertstring(string str){
    if(str.length()==1)
        return str[0] - '0';
    double y = convertstring(str.substr(1));
    double x = str[0] - '0';
    x = x * pow(10,str.length()-1) + y;
    return (int)x;
}
int main()
{
    string s;
    getline(cin, s);
    int result = convertstring(s);
    cout<<result<<endl;
    return 0;
}