class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        int k = 0;
        auto itStart = 0;
        auto itEnd = nums.size() - 1;

        while (itStart <= itEnd){
            while(itEnd > itStart && nums[itEnd] == val){
                itEnd--;
            }
            if (itEnd == itStart) {
                if (nums[itStart] != val) k++;
                break;
            }
            if (nums[itStart] == val){
                nums[itStart] = nums[itEnd];
                itEnd--;
                k++;
            }
            else{
                k++;
            }
            itStart++;
        }
        return k;
    }
};