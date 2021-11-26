//Editorial: https://youtu.be/Lw4_BOwSOcA
class Solution{
  public:
int dp[500][500];
int solve(string pat,string str,int i,int j)
{
    if(i==-1 and j==-1)
      return 1;
    if(j==-1)
    {
        for(int it=0;it<i;it++)
        {
            if(pat[it]!='*')
              return 0;
        }
        return 1;
    }
    if(i==-1)
      return 0;
    if(dp[i][j]!=-1)
      return dp[i][j];
    if(pat[i]==str[j] or pat[i]=='?')
      return dp[i][j]=solve(pat,str,i-1,j-1);
    if(pat[i]=='*')
    {
        int opt1=solve(pat,str,i-1,j);
        int opt2=solve(pat,str,i,j-1);
        return dp[i][j]=opt1 or opt2;
    }
    return dp[i][j]=0;
}
    int wildCard(string pat,string str)
    {
        memset(dp,-1,sizeof(dp));
        int ans=solve(pat,str,pat.size()-1,str.size()-1);
        if(ans)
          return 1;
        else
          return 0;
    }
};
