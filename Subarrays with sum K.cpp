//Editorial: In the solution.

class Solution{
    public:
    int findSubArraySum(int arr[], int N, int k)
    {
        int ans = 0;
        map<int,int> mp;
        int sum  = 0;
        for(int i = 0;i< N;i++)
        {
            // the main intuition behind this is 
            // we need to find the frequencies of (sum - k)
            // at every indexes 
            // and suppose at any index the sum becomes equal
            // to k then just directly update the ans by 1
            // because if the array is 10 2 -2 -20 10
            // and k is -10
            // at index 3 we can see there can be a possibility
            // lets see how 
            // the sum is becoming k at index 3 so increment by 1
            // and at index 4 there is the sum - k is occuring 
            // in map and thereby we will increment the value by 1.
            sum += arr[i];
            if(sum == k)
                ans += 1;
            if(mp.find(sum-k) != mp.end())
                ans += mp[sum-k];
            mp[sum] += 1;
        }
        return ans;
    }
};




