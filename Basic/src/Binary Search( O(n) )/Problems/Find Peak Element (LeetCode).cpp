class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int k = - 1;
        if(nums.size() == 1)
        {
            return 0;
        }
        if(nums.size() == 2)
        {
            if(nums[0] > nums[1])
            {
                return 0;
            }
            else{
                return 1;
            }
        }
        nums.push_back(-1000000);
        nums.push_back(-20000000);
        int l = nums.size() - 1;
        for(int a = l ; a >= 1; a /= 2)
        {
            while(nums[k + a] < nums[k + a + 1]) k += a;

         }

        return (k + 1);
    }
};
