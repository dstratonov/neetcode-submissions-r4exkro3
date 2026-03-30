class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int k = 0;
        auto it = nums.begin();
        while (it != nums.end()){
            auto value = *it;
            auto jt = it;
            nums[k] = *it;
            while (jt != nums.end() && *jt == value){
                jt++;
            }
            it = jt;
            k++;
        }
        return k;
    }
};