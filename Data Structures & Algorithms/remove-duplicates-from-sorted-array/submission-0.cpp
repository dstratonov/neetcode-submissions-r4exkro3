class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int k = 1;
        vector<int> result;
        result.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] != nums[i - 1]) {
                k++;
                result.push_back(nums[i]);
            }
        }
        nums = result;
        return k;
    }
};