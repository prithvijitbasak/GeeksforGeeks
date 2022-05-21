//Editorial: https://www.geeksforgeeks.org/kaprekar-number/
class Solution {
  public:
    int isKaprekar(int n) {
        int sqn=n*n;
        int cnt=0;
        while(sqn)
        {
            cnt+=1;
            sqn/=10;
        }
        sqn=n*n;
        for(int i=1;i<=cnt;i++)
        {
            int half=pow(10,i);
            if(half==n)
              continue;
            int lsum=sqn/half;
            int rsum=sqn%half;
            if(lsum+rsum==n)
              return 1;
        }
        return 0;
    }
};
