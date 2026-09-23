class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>container;
        int n =nums.size();
        for(int i =0;i<n;i++)
        {
            container.insert(nums[i]);
        }
        if(container.size()<n)return true;

        return false;
        
    }
};