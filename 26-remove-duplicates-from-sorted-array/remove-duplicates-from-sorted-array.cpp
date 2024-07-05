class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> num;
        num.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] != nums[i-1]){
                num.push_back(nums[i]);
            }
        }


        for (int i = 0; i < num.size(); i++){
            nums[i] = num[i];
        }

        return num.size();
    }
};