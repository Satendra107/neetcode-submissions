class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>> ans;

        for(int i = 0; i < nums.size(); i++){
            ans.push_back({nums[i], i});
        }
        
        sort(ans.begin(), ans.end());

        int left = 0;
        int right = nums.size() - 1;

        while(left < right){
            int sum = ans[left].first + ans[right].first;
            if(sum == target){
                return {min(ans[left].second, ans[right].second),
                        max(ans[left].second, ans[right].second)};
            }
            else if(sum > target){
                right--;
            }
            else{
                left++;
            }
        }
        return {};
    }
};
