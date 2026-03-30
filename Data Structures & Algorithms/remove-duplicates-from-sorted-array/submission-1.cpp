class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        auto it = std::next(nums.begin());
        while (it != nums.end()){
            if (*it != *(std::prev(it))){
                it++;
            }
            else{
                nums.erase(it);
            }
        }
        return nums.size();
    }
};