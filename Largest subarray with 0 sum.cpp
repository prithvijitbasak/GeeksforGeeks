//Editorial: In the solution.


class Solution{
    public:
    int maxLen(vector<int> &arr, int n)
    {   
        int ans = 0;
        map<int,int> mp;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            // the intuition is 
            // suppose there is an array and a subarray from
            // index l to r and the sum till rth 
            // index from 0th index is x and if 
            // the sum till l-1 th index is also x then it is 
            // evident that the sum of l to r th index is 0
            // we need to store the first occurence of 
            // every sum.
            sum += arr[i];
            if(ans == 0 and arr[i] == 0)
                ans = 1;
            if(sum == 0)
                ans = i + 1;
            if(mp.find(sum) != mp.end())
                ans = max(ans, i-mp[sum]);
            else
                mp[sum] = i;
        }
        return ans;
    }
};


