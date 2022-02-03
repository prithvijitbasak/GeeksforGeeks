//Editorial: https://youtu.be/bLGZhJlt4y0
class Solution{
    public:
    void solve(int i,int j,vector<vector<int>> m,int n,vector<string> &ans,string move,vector<vector<int>> &vis,vector<int> di,vector<int> dj)
    {
        if(i==n-1 and j==n-1)
        {
            ans.push_back(move);
            return;
        }
        string dir="DLRU";
        for(int idx=0;idx<4;idx++)
        {
            int nexti=i+di[idx];
            int nextj=j+dj[idx];
            if(nexti>=0 and nextj>=0 and nexti<n and nextj<n and !vis[nexti][nextj] and m[nexti][nextj])
            {
                vis[i][j]=1;
                solve(nexti,nextj,m,n,ans,move+dir[idx],vis,di,dj);
                vis[i][j]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int> (n,0));
        vector<int> di={1,0,0,-1};
        vector<int> dj={0,-1,1,0};
        if(m[0][0])
          solve(0,0,m,n,ans,"",vis,di,dj);
        return ans;
    }
};
