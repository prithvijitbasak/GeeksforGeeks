//Editorial: https://youtu.be/UmMh7xp07kY
class Solution{
public:
    int equalPartition(int n, int arr[])
    {
        int sum=0;
        for(int i=0;i<n;i++)
          sum+=arr[i];
        if(sum&1)
          return false;
        else
          return issubsetsum(n,arr,sum/2);
    }
    bool issubsetsum(int n,int arr[],int sum)
    {
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
        return dp[n][sum];
    }
};
