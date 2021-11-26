//Editorial: https://youtu.be/-fx6aDxcWyg
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    int m=str1.size();
	    int n=str2.size();
	    vector<vector<int>> dp(m+1,vector<int> (n+1));
	    for(int i=0;i<=m;i++)
	    {
	        for(int j=0;j<=n;j++)
	        {
	            if(i==0 or j==0)
	              dp[i][j]=0;
	            else if(str1[i-1]==str2[j-1])
	              dp[i][j]=1+dp[i-1][j-1];
	            else
	              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    int lcs=dp[m][n];
	    int ins=n-lcs;
	    int del=m-lcs;
	    return ins+del;
	    
	} 
};
