class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s  =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                swap(nums[i],nums[s++]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                swap(nums[i],nums[s++]);
        }
        
    }
};