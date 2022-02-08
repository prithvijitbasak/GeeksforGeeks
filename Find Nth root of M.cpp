//Editorial: https://youtu.be/WjpswYrS2nY, https://discuss.geeksforgeeks.org/comment/661bf0fbdbad25c63819277a6ea60a29
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    if(m==1)
	      return 1;
	    int low=2,high=m;
	    while(low<=high)
	    {
	        int mid=(low+high)>>1;
	        long long val=pow(mid,n);
	        if(val==m)
	          return mid;
	        else if(val>m or val<0) // val<0 is to tackle the overflow of integer
	          high=mid-1;
	        else
	          low=mid+1;
	    }
	    return -1;
	}  
};
