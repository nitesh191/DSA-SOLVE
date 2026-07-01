class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int start=0, n = nums.size();
       for(int i = 1; i < n; i++){
        if(nums[start] != nums[i]){
            start++;
            swap(nums[start],nums[i]);
        }
       } 
       return start+1;
    }
};
