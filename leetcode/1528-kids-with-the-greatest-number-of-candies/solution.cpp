class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
       int n =  candies.size(), sum = 0, max = candies[0];
       vector<bool> ans;
       for(int i = 1; i < n; i++){
        if(candies[i]> max)
        max = candies[i];
       }     
       for(int i = 0; i < n; i++){
        sum = candies[i] + extraCandies;
        if(sum >= max){
            ans.push_back(true);
        }
        else{
            ans.push_back(false);
        }
       }
       return ans;
    }
};
