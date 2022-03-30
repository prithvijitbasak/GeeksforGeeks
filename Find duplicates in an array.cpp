//Approach 1: Using sorting. TC : O(nlogn) SC: O(1)
//Editorial: Just sort the array and store the repeating numbers.
vector<int> duplicates(int arr[], int n) {
        vector<int> ans;
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            int f=0;
            while(i<n and arr[i]==arr[i-1])
            {
                if(f==0)
                  ans.push_back(arr[i]);
                f=1;
                i++;
            }
        }
        return ans.empty()?vector<int> {-1}:ans;
    }
