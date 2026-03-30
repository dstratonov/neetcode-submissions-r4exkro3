class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        auto newEnd = std::unique(nums.begin(), nums.end());
        return newEnd - nums.begin();
    }
};