class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=0;
        int r=nums.size()-1;

        

        while ( l <= r ) {
            int mid = l + (r-l)/2;
            if (nums[mid]==target) {
                return mid;
            }
            else if (target < nums[mid]) {
                r = mid - 1;
            }
            else if (target > nums[mid]) {
                l = mid + 1;
            }
        }

        // for (int i = 0 ; i < nums.size(); i ++) {
        //     if (nums[i]==target) {
        //         return i;
        //     }
        // }

        return -1;
    }
};