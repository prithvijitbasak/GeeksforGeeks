//Editorial: https://youtu.be/5rtVTYAk9KQ
class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b) {
        
        int xoroftwo=a^b;
        int n=xoroftwo,cnt=0;
        while(n)
        {
            if(n&1)
                cnt++;
            n>>=1;
        }
        return cnt;
    }
};
