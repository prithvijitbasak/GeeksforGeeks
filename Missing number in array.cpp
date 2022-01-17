//Editorial: Just find the sum of n natural numbers and return the difference of sum of n natural numbers and sum of all array elements.
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int totsum=n*(n+1)/2;
        int sum=0;
        for(auto it:array)
            sum+=it;
        return totsum-sum;
    }
};
