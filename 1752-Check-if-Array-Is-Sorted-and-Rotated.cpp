class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 1 ; i < n ; i++) {
            if (nums[i-1] > nums[i]) { //iterate through and find descending order
                count++;
            }
        }
        if (nums[n-1] > nums[0]) count++;//first and last element to find wrap around
        return count <= 1;     
        
    }
};