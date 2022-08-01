class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int i :nums)
        //     ++mp[i];
        // for(auto it : mp){
        //     if(it.second>1)
        //         return it.first;
        // }    
        // return 0;
        int s = 1;
        int e = nums.size()-1;
        while(s <= e){
            int mid = s+ (e-s)/2;
            int cnt = 0;
            for(int i:nums){
                if(i<=mid)
                    ++cnt;
            }
            if(cnt <= mid)
                s= mid +1;
            else
                e = mid-1;
        }
        return s;
    }
};