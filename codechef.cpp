#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],b[n],sum=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];

		sort(b,b+n);
		sort(a,a+n);

		for(int i=0;i<k;i++){
			if(a[i]<b[n-1-i]) a[i]=b[n-1-i];
		}

		for(int i=0;i<n;i++) sum+=a[i];

		cout<<sum<<endl;
	}
	return 0;
}