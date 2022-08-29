//Editorial: https://www.geeksforgeeks.org/find-subarray-with-given-sum/
vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> res;
        if(n==0)  return res;
        int curr_sum=arr[0],start=0;
        for(i=1;i<=n;i++)
        {
            while(curr_sum>s && start<i-1)
            {
                curr_sum-=arr[start];
                start++;
                
            }
            if(curr_sum==s){
              res.push_back(start+1);
              res.push_back(i);
              return res;
            }
            if(i<n)
              curr_sum+=arr[i];
              
        }
     res.push_back(-1);
     return res;
    }
