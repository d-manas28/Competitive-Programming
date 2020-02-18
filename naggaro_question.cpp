#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int n;
		int tempdiff;
		int diff = 1000;
		int first,second;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		int total_money;
		cin>>total_money;
		for(int i=0;i<n;i++){
			for(int j=1;j<n;j++){
				if(arr[i] + arr[j] == total_money){
					tempdiff = abs(arr[i]- arr[j]);
					if(tempdiff < diff)
						{
							first = arr[i];
							second = arr[j];
						}
					diff = min(tempdiff, diff); 
				}
			}
		}
		cout<<"Deepak should buy roses costing "<<first<<" and "<<second<<endl;
	}
	return 0;
}
