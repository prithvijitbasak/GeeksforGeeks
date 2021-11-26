//Editorial: https://youtu.be/wuOOOATz_IA
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
const ll mod=1e9+7;
ll binpow(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
bool isprime(ll n)
{
	if(n==1)
		return false;
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
void solve()
{
}
int main()
{
	cout<<"Enter the string"<<"\n";
    string s1;
    cin>>s1;
    string s2=s1;
    reverse(s2.begin(),s2.end());
    ll m=s1.size(),n=s2.size();
    vector<vector<ll>> dp(m+1,vector<ll> (n+1));
    for(ll i=0;i<=m;i++)
    {
    	for(ll j=0;j<=n;j++)
    	{
    		if(i==0 or j==0)
    		  dp[i][j]=0;
    		else if(s1[i-1]==s2[j-1])
    		  dp[i][j]=1+dp[i-1][j-1];
    		else
    		  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout<<"The length of the longest palindromic substring is"<<"\n";
	cout<<dp[m][n];
}
