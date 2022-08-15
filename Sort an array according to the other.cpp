//Editorial: https://leetcode.com/problems/relative-sort-array/discuss/364612/C++-Map-Solution
vector<int> sortA1ByA2(vector<int> arr1, int N, vector<int> arr2, int M) 
    {
        map<int,int> mp;
        for(auto it:arr1)
          mp[it]+=1;
        int pos=0;
        for(auto it:arr2)
        {
            while(mp[it]-- > 0)
              arr1[pos++]=it;
        }
        for(auto it:mp)
        {
            while(it.second-- > 0)
              arr1[pos++]=it.first;
        }
        return arr1;
    }
