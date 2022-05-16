//Editorial: Just iterate over the number and check for the set bits.
class Solution {
  public:
    int setBits(int n) {
        int ans=0;
        while(n){
            ans+=(n&1);
            n>>=1;
        }
        return ans;
    }
};
