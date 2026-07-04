class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() <= 1) return;
       int start = 0, end = 1;
       while(end < nums.size()){
        if(nums[start] == 0 && nums[end] != 0){
            swap(nums[start],nums[end]);
            start++,end++;
        }
        else if(nums[start]== 0 && nums[end] == 0){
            end++;
        }
        else{
            start++;
            if(end <= start)
            end = start+1;
        }
       }
    }
};
