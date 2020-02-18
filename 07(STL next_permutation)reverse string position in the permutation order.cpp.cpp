#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
using namespace std;
int main()
{
    fast;
	cin.tie(NULL);
    string s;
   // cout<<"\n Enter the Name: = ";
	getline(cin,s);
	string rev_s;
	rev_s = s;
    std::reverse(rev_s.begin(),rev_s.end());
    int count = 0;
    do
    {
        count++;
        //cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<"\n";
        if(s==rev_s)
            break;
    }while(next_permutation(s.begin(),s.end()));
    cout<<"\n"<<count;
}
