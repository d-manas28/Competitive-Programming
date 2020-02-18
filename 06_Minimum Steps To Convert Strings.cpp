#include<bits/stdc++.h>
using namespace std;
int getNumberOperation(char input[100],char output[100]){
    int table[101][101];
    int n = strlen(input);
    int m = strlen(output);
    for(int i=0;i<=n;i++){
        table[0][i] = i;
    }
    for(int j=1;j<=m;j++){
        table[j][0] = j;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(input[j-1] == output[i-1]){
                table[i][j] = table[i-1][j-1];
            }
            else
            {
                table[i][j] = 1 + min(table[i][j-1],min(table[i-1][j-1],table[i-1][j]));
            }
        }
    }
    return table[m][n];
}
int main(){
    char input[100],output[100];
    cin>>input>>output;
    int operationsrequied = getNumberOperation(input,output);
    cout<<operationsrequied<<endl;
    return 0;
}