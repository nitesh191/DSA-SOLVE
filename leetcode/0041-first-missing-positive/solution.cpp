class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            long long crtidx = (long long)nums[i]-1;
            if(nums[i]<=0 || nums[i]>n || nums[crtidx]==nums[i]) i++;
            else swap(nums[i],nums[crtidx]);
        }
        for(int i = 0; i<n; i++){
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;
    }
};
