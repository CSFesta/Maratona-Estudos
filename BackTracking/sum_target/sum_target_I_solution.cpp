/*
class Solution {
public:

    int ans = 0;
    void backtrack(vector<int> &nums, int target, int cur_sum, int depth){
        if(depth == nums.size()){
            if(cur_sum == target){
                ans++;
            }
            return;
        }
        backtrack(nums, target, cur_sum + nums[depth], depth + 1);
        backtrack(nums, target, cur_sum - nums[depth], depth + 1);

    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int cur_sum = 0;
        int depth = 0;
        backtrack(nums, target, cur_sum, depth);
        return ans;
    }
};
*/