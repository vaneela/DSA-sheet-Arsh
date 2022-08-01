class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans(2,-1);
        for(int i=0; i< nums.size(); i++){
            auto it = mp.find(target- nums[i]);
            if(it != mp.end()){
                ans[0] = i;
                ans[1] = it->second;
                break;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};