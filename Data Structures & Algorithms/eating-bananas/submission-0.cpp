class Solution {
    private:
    long long hours(int index,vector<int>&nums)
    {
        long long TotalHour=0;
        for(int i=0;i<nums.size();i++)
        {
            TotalHour+=ceil((double)nums[i]/index);
            

        }
        return TotalHour;

    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(high>=low)
        {
            int mid=low+(high-low)/2;
            long long req=hours(mid,piles);
            if(req <=h)
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
