//Editorial: https://youtu.be/9uUVFNOT3_Y
class Solution{
public:
    int matrixMultiplication(int n, int arr[])
    {
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        int ans=matmem(dp,arr,1,n-1);
        return ans;
    }
    int matmem(vector<vector<int>> &dp,int arr[],int i,int j)
    {
        if(i>=j)
          dp[i][j]=0;
        if(dp[i][j]!=-1)
          return dp[i][j];
        int mn=INT_MAX;
        for(int k=i;k<=j-1;k++)
        {
            int temp=matmem(dp,arr,i,k)+matmem(dp,arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
            if(temp<mn)
              mn=temp;
        }
        return dp[i][j]=mn;
    }
};
