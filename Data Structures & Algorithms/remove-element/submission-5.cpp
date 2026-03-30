class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        auto k = nums.begin();
        for (auto it = nums.begin(); it != nums.end(); it++){
            if (*it != val){
                *k = *it;
                k = std::next(k);
            }
        }
        return k - nums.begin();
    }
};