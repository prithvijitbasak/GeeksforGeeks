//Editorial: https://youtu.be/CFwCCNbRuLY
class Solution{
  public:
    int minimumNumberOfDeletions(string s) { 
        string res=s;
        reverse(res.begin(),res.end());
        int m=res.size();
        int n=s.size();
        vector<vector<int>> dp(m+1,vector<int> (n+1));
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                  dp[i][j]=0;
                else if(res[i-1]==s[j-1])
                  dp[i][j]=1+dp[i-1][j-1];
                else 
                  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return n-dp[m][n];
    } 
};
