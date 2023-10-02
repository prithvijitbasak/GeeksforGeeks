//Editorial: In the solution.



class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        map<int,int> mp;
        // here we are storing the index of first occurence
        // of a element.
        // because we want tp store the first occurence thereby
        // only storing for a single time.
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i]) == mp.end())
                mp[arr[i]] = i;
        }
        int ans = 0;
        // for(auto it:mp)
        //     cout<<it.first<<" "<<it.second<<"\n";
        for(int i=0;i<n;i++)
            // here we are updating the answer.
            ans = max(ans, abs(mp[arr[i]]-i));
        return ans;
    }
};

