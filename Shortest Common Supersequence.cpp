//Editorial: https://youtu.be/823Grn4_dCQ
class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string x, string y, int m, int n)
    {
        vector<vector<int>> dp(m+1,vector<int> (n+1));
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                  dp[i][j]=0;
                else if(x[i-1]==y[j-1])
                  dp[i][j]=1+dp[i-1][j-1];
                else
                  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return m+n-dp[m][n];
    }
};
