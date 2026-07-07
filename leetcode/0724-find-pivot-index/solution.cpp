class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
       vector<int> right = nums;
       vector<int> left = nums;
       int sum = 0, sub = 0;
       for(int i = 1; i < left.size(); i++){
        left[i] = left[i-1] + left[i];
       }
       for(int i = right.size()-2; i >= 0; i--){
        right[i] = right[i+1] + right[i];
       }
       for(int i = 0; i < nums.size(); i++){
        if(left[i] == right[i]) return i;
       }
       return -1;
    }
};
