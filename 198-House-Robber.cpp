class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();


        //base case 
        if (n<2) {
            return nums[0];
        }

        vector<int> dp(n);

        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);

        // giving them what they want no extra memory to be used 

        for (int i = 2 ; i < n ; i++) {

            dp[i] = max(dp[i-2] + nums[i], dp[i-1]);

        }
        return dp[n-1];




    }

};