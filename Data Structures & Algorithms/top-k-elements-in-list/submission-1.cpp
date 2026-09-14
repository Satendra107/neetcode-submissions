class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> cnt;
        vector<vector<int>> freq(nums.size() + 1);

        for(int i : nums){
            cnt[i] += 1;
        }

        for(auto& j : cnt){
            freq[j.second].push_back(j.first);
        }

        vector<int> ans;
        for(int i = freq.size() - 1; i > 0; i--){
            for(int n : freq[i]){
                ans.push_back(n);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
