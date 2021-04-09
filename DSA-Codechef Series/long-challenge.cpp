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
	    unordered_set<string> dict;
	    for(int i=0;i<n;i++){
	        string temp="";
	        cin>>temp;
	        dict.insert(temp);
	    }
	    string s;
	    cin>>s;
	    // cout<<s<<endl;

	    // for(auto it=dict.begin();it!=dict.end();it++)
    	// 	cout<<*it<<" ";
	    
	    int dp[n+1];
	    memset(dp, 0, sizeof dp);
	    dp[n]=1;//empty string is true
	    for(int i=n-1;i>=0;i--){
	        string word;
	        for(int j=i;j<n;j++){
	            word+=s[j];
	            if(dict.find(word) != dict.end())
	                if(dp[j+1])
	                    dp[i]=1;
	        }
	        
	    }
	    // for(int i=0;i<=n;i++) cout<<dp[i]<<" ";
	    cout<<dp[0]<<endl;		
	}
	return 0;
}