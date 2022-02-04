//Editorial: https://youtu.be/wuVwUK25Rfc
bool check(int node,bool graph[101][101],int m,int n,vector<int> &color,int col)
{
    for(int i=0;i<n;i++)
    {
        if(i!=node and graph[i][node] and color[i]==col)
          return false;
    }
    return true;
}
bool solve(int node,bool graph[101][101],int m,int n,vector<int> &color)
{
    if(node==n)
        return true;
    for(int i=1;i<=m;i++)
    {
        if(check(node,graph,m,n,color,i))
        {
            color[node]=i;
            if(solve(node+1,graph,m,n,color))
              return true;
            color[node]=0;
        }
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int n)
{
     vector<int> color(n,0);
     if(solve(0,graph,m,n,color))
        return true;
    return false;
}
