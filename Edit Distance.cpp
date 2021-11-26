//Editorial: https://youtu.be/AuYujVj646Q
class Solution {
  public:
    int editDistance(string s, string t) {
        int m=s.size(),n=t.size();
        	vector<vector<int>> dp(m+1,vector<int> (n+1));
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
			  dp[i][j]=j;
			else if(j==0)
			  dp[i][j]=i;
			else if(s[i-1]==t[j-1])
			  dp[i][j]=dp[i-1][j-1];
			else
			  dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
		}
	}
	return dp[m][n];
    }
};
