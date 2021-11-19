//Editorial: https://youtu.be/-GtpxG6l_Mc
class Solution{
  public:
	int minDifference(int arr[], int n)  { 
	    int sum=0;
	    for(int i=0;i<n;i++)
	      sum+=arr[i];
	    vector<vector<bool>> dp(n+1,vector<bool> (sum+1));
	    for(int i=0;i<=n;i++)
	      dp[i][0]=true;
	    for(int i=1;i<=sum;i++)
	      dp[0][i]=false;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            if(j>=arr[i-1])
	              dp[i][j]=dp[i-1][j] or dp[i-1][j-arr[i-1]];
	            else
	              dp[i][j]=dp[i-1][j];
	        }
	    }
	    int ans=INT_MAX;
	    for(int i=0;i<=sum/2;i++)
	    {
	        if(dp[n][i]==true)
	          ans=min(ans,sum-2*i);
	    }
	    return ans;
	} 
};
