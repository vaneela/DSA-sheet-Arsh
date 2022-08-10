class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        vector<int>ans,temp;
        multimap<int,int>m;
        for(auto i:mp)
            m.insert({i.second,i.first});
        auto it = --m.end();
        while(k--){
            ans.push_back(it->second);
            --it;
        }
        
        return ans;
    }
};