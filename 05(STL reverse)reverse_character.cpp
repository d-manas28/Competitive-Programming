#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
vector<char> v;
v.push_back('a');
v.push_back('b');
v.push_back('c');
v.push_back('d');
v.push_back('e');
vector<char>::iterator it;
std::reverse(v.begin(),v.end());
    for(it= v.begin();it<v.end();++it)
    {
        cout<<*it<<" ";
    }
return 0;
}
