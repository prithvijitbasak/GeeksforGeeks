//Editorial: https://youtu.be/LjPx4wQaRIs
class Solution 
{
    public:
    static bool comparison(Job a, Job b){
        return (a.profit>b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {
        // your code here
        sort(arr,arr+n,comparison);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i].dead);
        }
        vector<int> slot(maxi+1,-1);
        int countJobs=0;
        int jobProfit=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead; j>0; j--){
                if(slot[j]==-1){
                    slot[j]=i;
                    countJobs++;
                    jobProfit+=arr[i].profit;
                    break;
                }
            }
        }
        vector<int> ans;
        ans.push_back(countJobs);
        ans.push_back(jobProfit);
        return ans;
    }
};
