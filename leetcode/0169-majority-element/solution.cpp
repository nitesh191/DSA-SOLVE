class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int candidate, count = 0, n = nums.size();
       for(int i= 0; i < n; i++){
        if(count == 0){
            count++;
            candidate = nums[i];
        }
        else{
            if(candidate == nums[i])
            count++;
            else
            count--;
        }
       } 
       for(int i= 0; i < n; i++){
        if(nums[i] == candidate)
        count++;
       } 
       if(count > n/2){
        return candidate;
       }
       else
       return -1;
    }
};
