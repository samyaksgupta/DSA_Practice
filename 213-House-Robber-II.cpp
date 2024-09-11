class Solution {
public:
    // house robber 1
    int robLinear(const vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }

        return dp[n - 1];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        
       
        if (n == 1) return nums[0];

        // Calculate the max profit by robbing the range [0, n-2] or [1, n-1]
        return max(robLinear(vector<int>(nums.begin(), nums.end() - 1)),robLinear(vector<int>(nums.begin() + 1, nums.end())));
    }
};
