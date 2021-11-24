//Editorial: https://youtu.be/x5hQvnUcjiM
// Prithvijit Basak
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<deque>
#include<numeric>
#include<climits>
using namespace std;
typedef long long int ll;
void lcs(string a,string b,ll m,ll n)
{
	vector<vector<ll>> dp(m+1,vector<ll> (n+1));
	for(ll i=0;i<=m;i++)
	{
		for(ll j=0;j<=n;j++)
		{
			if(i==0 or j==0)
			  dp[i][j]=0;
			else if(a[i-1]==b[j-1])
			  dp[i][j]=1+dp[i-1][j-1];
			else
			  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	ll idx=dp[m][n];
	string ans="";
	ll i=m,j=n;
	while(i>0 and j>0)
	{
		if(a[i-1]==b[j-1])
		{
			ans+=a[i-1];
			i--;
			j--;
			idx--;
		}
		else if(dp[i-1][j]>dp[i][j-1])
		  i--;
		else
		  j--;
	}
	reverse(ans.begin(),ans.end());
	cout<<ans<<"\n";
}
int main()
{
    cout<<"Enter the string"<<"\n";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    ll m=a.size();
    ll n=b.size();
    cout<<"The LCS is: "<<"\n";
    lcs(a,b,m,n);
}
/*
Input Sequence:
AGGTAB
GXTXAYB
Output:
GTAB
*/
