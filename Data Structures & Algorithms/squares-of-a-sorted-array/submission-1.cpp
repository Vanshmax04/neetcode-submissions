class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int k=nums.size()-1;
        vector<int>ans(k+1,0);

        while(right>=left)
        {
            if(abs(nums[left])<abs(nums[right]))
            {
                ans[k]=nums[right]*nums[right];
                right--;


            }else
            {
                ans[k]=nums[left]*nums[left];
                left++;
            }k--;
        }
        return ans;
        
    }
};