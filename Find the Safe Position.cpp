//Editorial: https://leetcode.com/problems/find-the-winner-of-the-circular-game/discuss/1601186/C%2B%2B-oror-3-Approach-oror-Easy-Understanding
class Solution {
  public:
    int safePos(int n, int k) {
        int ans=0;
        for(int i=1;i<=n;i++)
            ans=(ans+k)%i;
        return ans+1;
    }
};
