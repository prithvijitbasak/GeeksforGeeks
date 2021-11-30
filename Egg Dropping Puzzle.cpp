//Editorial: https://youtu.be/pGVguAcWX4g
class Solution
{
    public:
    int eggDrop(int e,int f)
    {
        int res;
        vector<vector<int>> dp(e+1,vector<int> (f+1,-1));
        res=mem(dp,e,f);
        return res;
    }
    int mem(vector<vector<int>> &dp,int e, int f)
    {
        if(e==1)
          return f;
        if(f==0 or f==1)
          return f;
        if(dp[e][f]!=-1)
          return dp[e][f];
        int mn=INT_MAX;
        for(int i=1;i<=f;i++)
        {
            int temp=1+max(mem(dp,e-1,i-1),mem(dp,e,f-i));
            mn=min(mn,temp);
        }
        return dp[e][f]=mn;
    }
};
