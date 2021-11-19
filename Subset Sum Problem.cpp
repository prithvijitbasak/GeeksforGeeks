//Editorial: Its just a variation of 0-1 knapsack problem.
//Video Editorial: https://youtu.be/_gPcYovP7wc
class Solution{   
public:
    bool isSubsetSum(int n, int arr[], int sum){
        // bool dp[n+1][sum+1];
        vector<vector<bool>> dp(n+1,vector<bool> (sum+1));
        for(int i=0;i<=n;i++)
          dp[i][0]=true;
        for(int j=1;j<=sum;j++)
          dp[0][j]=false;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(j<arr[i-1])
                  dp[i][j]=dp[i-1][j];
                else
                {
                    dp[i][j]=(dp[i-1][j] or dp[i-1][j-arr[i-1]]);
                }
            }
        }
    return dp[n][sum];
    }
};
