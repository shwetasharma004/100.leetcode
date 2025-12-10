class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int R = 0; R < nums.size(); R++) {
            for (int j = R + 1; j < nums.size(); j++) {
                if (nums[R] + nums[j] == target) {
                    return {R, j};
                }
            }
        }
        return {};
    }
};