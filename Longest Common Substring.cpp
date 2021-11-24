//Editorial: https://youtu.be/HrybPYpOvz0
class Solution{
public:
int longestCommonSubstr (string a, string b, int x, int y)
{
    int ans=0;
    vector<vector<int>> dp(x+1,vector<int> (y+1));
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            if(i==0 or j==0)
              dp[i][j]=0;
            else if(a[i-1]==b[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
                ans=max(ans,dp[i][j]);
            }
            else
              dp[i][j]=0;
        }
    }
    return ans;
}
};
