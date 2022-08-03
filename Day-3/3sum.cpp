class Solution {
public:
 
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>>se;
        int n = nums.size();
        if(n < 3)
            return ans;
        
        sort(nums.begin(), nums.end());
        vector<int> temp;
        for(int i =0; i < n-2; i++){
            int s = i+1, e= n-1;
            while(s < e){
                int sum = nums[i] + nums[s] +  nums[e];
                if(sum ==0 ){
                    
                    temp.push_back(nums[i]);
                    temp.push_back(nums[s]);
                    temp.push_back(nums[e]);
                    se.insert(temp);
                    s++;
                    e--;
                    temp.clear();

                }else if(sum > 0)
                    e--;
                else
                    s++;
            }
        }
        for(auto Ele : se)
            ans.push_back(Ele);
        return ans;
    }
};