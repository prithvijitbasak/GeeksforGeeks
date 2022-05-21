//Editorial: https://youtu.be/gYmWHvRHu-s
class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isvalid(int arr[],int n,int m,int mid)
    {
        int sum=0,cnt=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>mid)
              return false;
            if(sum+arr[i]>mid)
            {
                cnt+=1;
                sum=arr[i];
                if(cnt>m)
                  return false;
            }
            else
              sum+=arr[i];
        }
        return true;
    }
    int findPages(int arr[], int n, int m) 
    {
        int low=1,high=accumulate(arr,arr+n,0);
        // cout<<high<<"\n";
        int ans;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isvalid(arr,n,m,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
              low=mid+1;
        }
        return ans;
    }
};
