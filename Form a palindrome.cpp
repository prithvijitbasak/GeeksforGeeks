//Editorial: https://youtu.be/AEcRW4ylm_c
class Solution{
  public:
    int countMin(string s1){
        string s2=s1;
        reverse(s2.begin(),s2.end());
        int n=s1.size();
        vector<vector<int>> dp(n+1,vector<int> (n+1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                  dp[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                  dp[i][j]=1+dp[i-1][j-1];
                else
                  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return n-dp[n][n];
    }
};
