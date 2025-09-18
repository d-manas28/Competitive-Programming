#include<bits/stdc++.h>
using namespace std;
int checklcs(string x,string y){
    int size1 = x.length();
    int size2 = y.length();
    int table[size1+1][size2+1];
    for(int i=0;i<size2+1;i++){
        table[0][i] = 0;
    }
    for(int i=0;i<size1+1;i++){
        table[i][0] = 0;
    }
    for(int i=1;i<size1+1;i++){
        for(int j=1;j<size2+1;j++){
            if(x[i-1] == y[j-1]){
                table[i][j] = 1 + table[i-1][j-1];
            }
            else
            {
                table[i][j] = max(table[i][j-1],table[i-1][j]);
            }
        }
    }
    return table[size1][size2];
}
int main(){
    string str1;
    string str2;
    getline(cin,str1);
    str2 = str1;
    std::reverse(str2.begin(),str2.end());
    int number = checklcs(str1,str2);
    cout<<number<<endl;
    return 0;
}