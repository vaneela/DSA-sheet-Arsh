class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i : nums)
            mp[i]++;
        int ans ,cnt =nums.size()/2;
        for(auto element : mp){
            if(element.second > cnt){
                cnt = element.second;
                ans = element.first;
            }
        }
        return ans;
    }
};