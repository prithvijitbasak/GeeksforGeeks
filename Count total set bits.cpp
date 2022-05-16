//Editorial: https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/
class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        if(n==0)
          return 0;
        int ans=0;
        int p=0;
        while(pow(2,p)<=n)
          p+=1;
        p--;
        ans+= (p*pow(2,p-1))+(n-pow(2,p)+1)+countSetBits(n-pow(2,p));
        return ans;
    }
};
