//Editorial: This problem is also called unbounded knapsack. Unlike 0-1 Knapsack here repititions of items are allowed.
// Video: https://youtu.be/aycn9KO8_Ls
class Solution{
public:
    int knapSack(int n, int w, int val[], int wt[])
    {
        vector<vector<int>> dp(n+1,vector<int> (w+1));
       
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if(i==0 or j==0)
                  dp[i][j]=0;
                if(j<wt[i-1])
                  dp[i][j]=dp[i-1][j];
                else
                  dp[i][j]=max(dp[i-1][j],dp[i][j-wt[i-1]]+val[i-1]);
            }
        }
        return dp[n][w];
    }
};
