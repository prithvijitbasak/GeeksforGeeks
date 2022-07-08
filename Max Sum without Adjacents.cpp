//Editorial: https://youtu.be/VT4bZV24QNo , https://youtu.be/GrMBfJNk_NY
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int arr[], int n) {
	    int incl=arr[0],excl=0;
	    for(int i=1;i<n;i++)
	    {
	        int newincl=excl+arr[i];
	        int newexcl=max(incl,excl);
	        excl=newexcl;
	        incl=newincl;
	    }
	    return max(incl,excl);
	}
};
