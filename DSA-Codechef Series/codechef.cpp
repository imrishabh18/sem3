#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];

		int sum=0;
		for(int i=0;i<n-1;i++){
			sum += abs(arr[i+1]-arr[i])-1;
		}
		cout<<sum<<endl;
	}
	return 0;
}