class Solution {
public:

    typedef pair<int, int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> cnt;

        for(int i : nums){
            cnt[i]++;
        }

        vector<vector<int>> bucket(nums.size()+1);
        for(auto& it : cnt){
            int element = it.first;
            int freq = it.second;

            bucket[freq].push_back(element);
        }

        vector<int> ans;
        for(int i = nums.size(); i >= 0; i--){
            if(bucket[i].size() == 0) continue;

            while(bucket[i].size() > 0 && k > 0){
                ans.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }

        return ans;
    }
};
