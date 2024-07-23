class Solution {
public:
    void sortColors(vector<int>& nums) {
        int sta = 0;
        int mid = 0;
        int end = nums.size() - 1;

        while (mid <= end) {
            // case 0
            if (nums[mid] == 0 ) {
                swap(nums[sta] , nums[mid]);
                sta++;
                mid++;

            }
            //case 1
            else if (nums[mid] == 1 ) {
                mid++;
            }
            // case 2
            else if (nums[mid] == 2) {
                swap(nums[mid] , nums[end]);
                end--;             

            }

        }


    }
};