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
// approach 2 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0, o=0;
        for(int i: nums){
            if(i==0)
                z++;
            else if(i==1)
                o++;
        }
        int s=0;
        while(z--)
            nums[s++]=0;
        
        while(o--)
            nums[s++]=1;
        while(s < nums.size())
            nums[s++]=2;
    }
};


// approach 3 One pass🥶
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s= 0, e = nums.size()-1, cur = 0;
        while(cur <= e){
            if(nums[cur] == 0)
                swap(nums[cur++],nums[s++]);
            else if(nums[cur] == 1)
                cur++;
            else
                swap(nums[cur], nums[e--]);
        }
    }
};