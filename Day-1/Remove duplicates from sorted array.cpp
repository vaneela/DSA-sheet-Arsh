class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s =0;
        for(int i=0;i<nums.size()-1; i++){
            if(nums[i]==nums[i+1])
                nums[s]=nums[i];
            else
                nums[++s]=nums[i+1];
        }
        return s+1;
    }
};