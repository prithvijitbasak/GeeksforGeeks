//Editorial: Very basic problem. Just knowledge of Maps is required.
class Solution
{
    public:
        int countWords(string list[], int n)
        {
           map<string,int> mp;
           for(int i=0;i<n;i++)
             mp[list[i]]++;
            int cnt=0;
            for(auto it:mp)
            {
                if(it.second==2)
                  cnt++;
            }
            return cnt;
        }

};
