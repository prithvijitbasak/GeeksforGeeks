//Editorial: https://youtube.com/playlist?list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    {
        vector<vector<int>> dp(n+1,vector<int> (w+1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=w;j++)
            {   
                if(i==0 or j==0)
                    dp[i][j]=0;
                else if(j<wt[i-1])
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=max(dp[i-1][j-wt[i-1]]+val[i-1],dp[i-1][j]);
            }
        }
        return dp[n][w];
    }
};
