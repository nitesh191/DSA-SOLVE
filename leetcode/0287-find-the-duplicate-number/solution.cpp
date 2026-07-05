class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0, n = nums.size();
        while( i < n){
            long long exp_index = (long long)nums[i]-1;
            if( nums[exp_index] == nums[i])
            i++;
            else
            swap(nums[i], nums[exp_index]);
        }
        for(int j = 0; j < n; j++)
        if(nums[j]-1 != j) return nums[j];

        return -1;

    }
};
