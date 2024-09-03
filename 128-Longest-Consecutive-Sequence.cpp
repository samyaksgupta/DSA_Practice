class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int maxSeq = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                int length = 0;
                while (numSet.find(num + length) != numSet.end()) {
                    length++;
                }
                maxSeq = std::max(maxSeq, length);
            }
        }
        return maxSeq;
    }
};