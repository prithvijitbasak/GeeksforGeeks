//Editorial: https://youtu.be/I-l6PBeERuc
class Solution{

	public:
	int minCoins(int coins[], int n, int sum) 
	{ 
	    vector<vector<int>> dp(n+1,vector<int> (sum+1));
	    for(int i=0;i<=sum;i++)
	      dp[0][i]=INT_MAX-1;
	    for(int i=1;i<=n;i++)
	      dp[i][0]=0;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            if(coins[i-1]<=j)
	              dp[i][j]=min(dp[i-1][j],dp[i][j-coins[i-1]]+1);
	            else
	              dp[i][j]=dp[i-1][j];
	        }
	    }
	    if(dp[n][sum]==INT_MAX-1)
	      return -1;
	    else
	      return dp[n][sum];
	} 
	  
};
