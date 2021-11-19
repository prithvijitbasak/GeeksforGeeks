//Editorial: https://youtu.be/F7wqWbqYn9g
class Solution{   
public:
    int isSubsetSum(int n, int arr[], int sum){
        // bool dp[n+1][sum+1];
        vector<vector<int>> dp(n+1,vector<int> (sum+1));
        for(int i=0;i<=n;i++)
          dp[i][0]=1;
        for(int j=1;j<=sum;j++)
          dp[0][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(j<arr[i-1])
                  dp[i][j]=dp[i-1][j];
                else
                {
                    dp[i][j]=(dp[i-1][j] + dp[i-1][j-arr[i-1]]);
                }
            }
        }
    return dp[n][sum];
    }
};
