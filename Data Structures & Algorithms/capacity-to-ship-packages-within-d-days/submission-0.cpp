class Solution {
    private:
    int reqSum(vector<int>&nums)
    {
        int sum=0;
        for(auto it : nums)
        {
            sum+=it;

        }
        return sum;

    }
    int helper(vector<int>&nums,int capacity)
    {

        int currentCapacity=0;
        int days=1;
        for(int i=0;i<nums.size();i++)
        {
            if(currentCapacity+nums[i]<=capacity)
            {
                currentCapacity+=nums[i];
            }
            else
            {
                days++;
                currentCapacity=nums[i];
            }
        }return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=reqSum(weights);
        //sort(weights.begin(),weights.end());
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(helper(weights,mid)<=days)
            {
               high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
        
    }
};