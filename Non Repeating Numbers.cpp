//Editorial: https://youtu.be/ZwU6wSkepBI
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int xorall=0,xor1=0,xor2=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
          xorall^=nums[i];
        int cnt=0;
        while(xorall)
        {
            if(xorall&1)
              break;
            cnt++;
            xorall>>=1;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]&(1<<cnt))
              xor1^=nums[i];
            else
              xor2^=nums[i];
        }
        if(xor1>xor2)
          swap(xor1,xor2);
        return vector<int> {xor1,xor2};
    }
};
