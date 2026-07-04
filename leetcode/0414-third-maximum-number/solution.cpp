class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int last = nums.size()-1, mini = INT_MIN, count = 1;
        if(nums.size() < 3) return nums[last];
        for(int i = last-1; i >= 0; i--){
            if(nums[i] != nums[i+1]){
                count++;
                if(count == 3) return nums[i];
            }
        }
        return nums[last];
    }
};
