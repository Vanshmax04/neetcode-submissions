class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low=1;
        long long high=num;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            long long sqr=mid*mid;
            if(sqr>num)
            {
                high=mid-1;

            }else if(sqr<num)
            {low=mid+1;

            }else
            {
                return true;
            }

        }
        return false;
        
    }
};