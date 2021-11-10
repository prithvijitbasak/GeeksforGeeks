//Editorial: https://youtu.be/FgOISz2D6YY
class Solution{
    const int mod=1e9+7;
public:
    int nCr(int n, int r){
        vector<vector<int>> dp(n+1,vector<int> (r+1));
        for(int i=0;i<=n;i++)
          dp[i][0]=1;
        for(int i=1;i<=r;i++)
          dp[0][i]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=r;j++)
            {
                if(i<j)
                  dp[i][j]=0;
                else if(i==j)
                  dp[i][j]=1;
                else
                  dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
            }
        }
        return dp[n][r];
    }
};
