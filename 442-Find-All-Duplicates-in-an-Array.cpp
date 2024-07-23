class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>dupes;
        for (int i = 1 ; i<nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                dupes.push_back(nums[i]);
                i++;
            }
        }
        return dupes;

        
    }
};