//better
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        int smaller = INT_MIN;
        int cnt = 0;
        int longest = 0;
        int n = nums.size();
        for( int i = 0 ; i<n ; i++ ) {
            if (nums[i]-1==smaller) {
                cnt++;
                smaller = nums[i];
            }
            else if (nums[i] != smaller) {
                cnt = 1;
                smaller = nums[i];

            }
            longest = max(longest, cnt); 
        }
        return longest;

    }
};