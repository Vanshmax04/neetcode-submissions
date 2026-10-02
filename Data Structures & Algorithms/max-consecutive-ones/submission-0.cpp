class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int MaxCount=0;
        int count=0;

        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                MaxCount=max(MaxCount,count);
                
            }
            else
            {
                count=0;

            }
        }
        
        return MaxCount;
    }
};