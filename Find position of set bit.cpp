//Editorial: https://www.geeksforgeeks.org/find-position-of-the-only-set-bit/
class Solution {
  public:
    int findPosition(int n) {
        if(n&(n-1) or n==0)
          return -1;
        int f=0;
        int p=0,ans;
        while(n)
        {
            p+=1;
            if(n&1)
            {
                f=1;
                ans=p;
            }
            n>>=1;
        }
        return ans;
    }
};
