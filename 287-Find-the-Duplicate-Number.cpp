class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0]; // 1
        int fast = nums[slow]; // 1 -> 3

        while(slow != fast) {
            fast = nums[nums[fast]]; // 3 -> 2
            slow = nums[slow]; // 
        }
        slow = 0;

        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
  
    }
};