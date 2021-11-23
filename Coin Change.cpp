//Editorial: https://youtu.be/I-l6PBeERuc
class Solution {
    public:
    typedef long long int ll;
  public:
    long long int count(int coins[], int m, int n) {
        vector<vector<ll>> dp(n+1,vector<ll> (m+1));
        for(ll i=0;i<=n;i++)
          dp[i][0]=1;
        for(ll i=1;i<=m;i++)
          dp[0][i]=0;
        for(ll  i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                if(coins[i-1]<=j)
                  dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
                else
                  dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};
