class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (auto it = nums.begin(); it != nums.end(); it++){
            if (*it != val){
                swap(nums[k], *it);
                k++;
            }
        }
        return k;
    }
};