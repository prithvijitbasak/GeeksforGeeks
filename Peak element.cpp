//Editorial: https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/
class Solution
{
    public:
    int peakElement(int arr[], int n) {
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if((mid==0 or arr[mid-1]<=arr[mid]) and (mid==n-1 or arr[mid+1]<=arr[mid]))
                return mid;
            if(mid>0 and arr[mid-1]>arr[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
};
